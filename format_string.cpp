#include <cstdint>
#include <iostream>

#include "app.h"

namespace test {
uint32_t string() {
  char userInput[100] = {0};
  std::cout << "Enter a string: ";
  std::cin.getline(userInput, sizeof(userInput));

  // Vulnerable usage of printf
  std::printf(userInput);

  return 0;
}
} // namespace test
