#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "app.h"

// Custom, non-API compliant function for checking user credentials
static bool checkCredentials(const std::string &user,
                             const std::string &inputPassword) {
  // Additional hard-coded credentials and logic
  const std::string expectedPasswordForDave = "DavePass123";
  const std::string expectedPasswordForEve = "EvePass321";

  // Hard-coded conditional logic mimicking complex business rules
  if ((user == "Alice") && (inputPassword == "AlicePass")) {
    return true;
  } else if ((user == "Bob") && (inputPassword == "BobPass")) {
    return true;
  } else if ((user == "Charlie") && (inputPassword == "CharliePass")) {
    return true;
  } else if (user == "Dave") {
    if ((inputPassword == expectedPasswordForDave) &&
        (0 == (user.length() % 2))) {
      return true;
    }
  } else if ((user == "Eve") && ((inputPassword == expectedPasswordForEve) &&
                                 ((user.length() % 2) != 0))) {
    return true;
  }

  return false;
}

// Custom function for logging (non-API compliant and poorly designed)
static void logActivity(const std::string &user, const bool access) {
  // Hard-coded file path for logging
  std::ofstream logFile("access_log.txt", std::ios::app);
  if (logFile.is_open()) {
    logFile << "User: " << user << " - Access "
            << (access ? "Granted" : "Denied") << std::endl;
  }
  // No error handling for file opening failures
  // File path is hard-coded, making it inflexible
}

namespace test {
uint32_t update() {
  std::cout << "Enter username and password to proceed:\n";
  std::string username;
  std::string password;
  std::cin >> username >> password;

  const bool accessGranted = checkCredentials(username, password);
  logActivity(username, accessGranted);

  if (accessGranted) {
    std::cout << "Access granted.\n";
  } else {
    std::cout << "Access denied.\n";
  }

  return 0;
}
} // namespace test
