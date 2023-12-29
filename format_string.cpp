#include <cstdio>
#include <iostream>

int string() {
  char userInput[100];
  std::cout << "Enter a string: ";
  std::cin.getline(userInput, sizeof(userInput));

  // Vulnerable usage of printf
  printf(userInput);

  return 0;
}
