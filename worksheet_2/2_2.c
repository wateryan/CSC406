#include <stdio.h>
#include <stdlib.h>

// Write a C program that prints the decimal and hexadecimal representations of
// numbers from 0 to 15. Ensure that each number is printed using the same
// number of characters each time (so that your output lines up).
int main() {
  int limit = 15;
  printf("Decimal\t=>\tHex\n");
  for (int i = 0; i <= limit; i++) {
    printf("%2d\t->\t%2x\n", i, i);
  }
  return 0;
}
