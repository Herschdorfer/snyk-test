#include <cstdlib>
#include <iostream>
#include <string>

int com_inj() {
  std::string userInput;
  std::cout << "Enter the file name to search: ";
  std::getline(std::cin, userInput);

  // Vulnerable command execution
  std::string command = "find . -name " + userInput;
  system(command.c_str());

  return 0;
}
