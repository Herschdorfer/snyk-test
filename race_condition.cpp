#include <iostream>
#include <thread>

int sharedVariable = 0;

void increment() {
  for (int i = 0; i < 100000; ++i) {
    ++sharedVariable; // Increment shared variable
  }
}

void decrement() {
  for (int i = 0; i < 100000; ++i) {
    --sharedVariable; // Decrement shared variable
  }
}

int race() {
  std::thread t1(increment);
  std::thread t2(decrement);

  t1.join();
  t2.join();

  std::cout << "Final value of shared variable: " << sharedVariable
            << std::endl;
  return 0;
}
