#include <cstdlib>
#include <iostream>
#include <string>
#include <sys/types.h>

#include "app.h"

namespace test {

u_int32_t comInj() {
  std::string userInput;
  std::cout << "Enter the file name to search: ";
  std::getline(std::cin, userInput);

  // Vulnerable command execution
  const std::string command = "find . -name " + userInput;
  std::system(command.c_str());

  return 0;
}
} // namespace test
