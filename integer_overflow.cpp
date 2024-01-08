#include "cstdio"
#include <climits>
#include <cstdint>

#include "app.h"

namespace test {
uint32_t intOverflow() {
  const uint32_t maxUInt = UINT32_MAX;
  const uint32_t overflowUInt = maxUInt;

  const int32_t maxSInt = INT32_MAX;
  const int32_t overflowSInt = maxSInt;

  printf("Maximaler Integer-Wert: %d\n", maxUInt);
  printf("Overflow-Wert: %d\n", (overflowUInt + 1));

  printf("Maximaler Integer-Wert: %d\n", maxSInt);
  printf("Overflow-Wert: %d\n", (overflowSInt + 1));

  const uint32_t minUInt = 0;
  const uint32_t underflowUInt = minUInt;

  const int32_t minSInt = INT32_MIN;
  const int32_t underflowSInt = minSInt;

  printf("Minimaler Integer-Wert: %d\n", minUInt);
  printf("Overflow-Wert: %d\n", (underflowUInt - 1));

  printf("Minimaler Integer-Wert: %d\n", minSInt);
  printf("Overflow-Wert: %d\n", (underflowSInt - 1));

  return 0;
}
} // namespace test
