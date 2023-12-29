#include <limits.h>
#include <stdio.h>

int int_over() {
  int maxInt = INT_MAX;
  int overflow = maxInt + 1;

  printf("Maximaler Integer-Wert: %d\n", maxInt);
  printf("Overflow-Wert: %d\n", overflow);

  return 0;
}
