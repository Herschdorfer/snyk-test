#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::string filename = "sensitive_data.txt";
  std::ifstream file(filename);

  if (!file.is_open()) {
    // Insecure error handling: exposing the file name and path
    std::cerr << "Error: Unable to open file '" << filename << "' for reading."
              << std::endl;
    return 1;
  }

  // File processing logic here

  file.close();
  return 0;
}
