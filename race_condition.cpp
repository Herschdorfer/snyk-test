#include <cstdint>
#include <iostream>
#include <thread>

#include "app.h"

namespace test {
uint32_t sharedVariable = 0;

static void increment() {
  for (uint32_t i = 0; i < 100'000; ++i) {
    // Increment shared variable
    ++sharedVariable;
  }
}

static void decrement() {
  for (uint32_t i = 0; i < 100'000; ++i) {
    // Decrement shared variable
    --sharedVariable;
  }
}

uint32_t race() {
  std::thread t1(increment);
  std::thread t2(decrement);

  t1.join();
  t2.join();

  std::cout << "Final value of shared variable: " << sharedVariable
            << std::endl;
  return 0;
}
} // namespace test
