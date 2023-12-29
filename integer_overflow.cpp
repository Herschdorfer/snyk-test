#include "cstdio"
#include <climits>
#include <cstdint>

#include "app.h"

namespace test {
uint32_t intOverflow() {
  const uint32_t maxInt = UINT32_MAX;
  const uint32_t overflow = maxInt;

  printf("Maximaler Integer-Wert: %d\n", maxInt);
  printf("Overflow-Wert: %d\n", overflow + 1);

  return 0;
}
} // namespace test
