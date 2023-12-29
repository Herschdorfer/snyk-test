#include <cstdint>
#include <cstring>

#include "app.h"

static void unsecureFunction(char const *const input) {
  char puffer[10] = {0};

  // No size check here
  std::strcpy(puffer, input);
}

namespace test {
uint32_t bufferOverflow() {
  const char zuLangerText[] = "aWayTooLongTextForTheDefinedBuffer";
  ::unsecureFunction(zuLangerText);
  return 0;
}
} // namespace test
