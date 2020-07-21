#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <divide10.h>

int main(void) {
  for (uint8_t n=1; n < 20; n++)
    printf("%llu\n", (unsigned long long) divide(10000000000000000000U,n));

  for (uint8_t n=1; n < 20; n++)
    printf("%llu\n", (unsigned long long)divide(10000000000000000000U-1,n));

  uint64_t d[] = {
    18446744073709551610u,
    18446744073709551600u,
    18446744073709551000u,
    18446744073709550000u,
    18446744073709500000u,
    18446744073709000000u,
    18446744073700000000u,
    18446744073700000000u,
    18446744073000000000u,
    18446744070000000000u,
    18446744000000000000u,
    18446744000000000000u,
    18446740000000000000u,
    18446700000000000000u,
    18446000000000000000u,
    18440000000000000000u,
    18400000000000000000u,
    18000000000000000000u,
    10000000000000000000u,
  };

  printf("\n%llu\n", (unsigned long long)d[0]);
  
  for (uint8_t n=1; n < sizeof d / sizeof d[0] + 1; n++) {
    uint64_t i = d[n-1];
    printf("%-20llu %-20llu\n", (unsigned long long)divide(i,n), (unsigned long long)divide(i-1,n));
  }
}
