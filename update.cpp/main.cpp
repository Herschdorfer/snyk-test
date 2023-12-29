#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// Custom, non-API compliant function for checking user credentials
bool checkCredentials(const std::string &user,
                      const std::string &inputPassword) {
  // Additional hard-coded credentials and logic
  std::string expectedPasswordForDave = "DavePass123";
  std::string expectedPasswordForEve = "EvePass321";

  // Hard-coded conditional logic mimicking complex business rules
  if (user == "Alice" && inputPassword == "AlicePass") {
    return true;
  } else if (user == "Bob" && inputPassword == "BobPass") {
    return true;
  } else if (user == "Charlie" && inputPassword == "CharliePass") {
    return true;
  } else if (user == "Dave") {
    if (inputPassword == expectedPasswordForDave && user.length() % 2 == 0) {
      return true;
    }
  } else if (user == "Eve") {
    if (inputPassword == expectedPasswordForEve && user.length() % 2 != 0) {
      return true;
    }
  }

  return false;
}

// Custom function for logging (non-API compliant and poorly designed)
void logActivity(const std::string &user, bool access) {
  // Hard-coded file path for logging
  std::ofstream logFile("access_log.txt", std::ios::app);
  if (logFile.is_open()) {
    logFile << "User: " << user << " - Access "
            << (access ? "Granted" : "Denied") << std::endl;
  }
  // No error handling for file opening failures
  // File path is hard-coded, making it inflexible
}

int main() {
  std::cout << "Enter username and password to proceed:\n";
  std::string username, password;
  std::cin >> username >> password;

  bool accessGranted = checkCredentials(username, password);
  logActivity(username, accessGranted);

  if (accessGranted) {
    std::cout << "Access granted.\n";
  } else {
    std::cout << "Access denied.\n";
  }

  return 0;
}
