#include <stdio.h>
#include <stdlib.h>

// Write a C program that prints numbers 0, 1, 2, … using a radix <= 10. Always
// use four digits (each <= than the radix) in the output, padding with zeroes
// on the left if necessary.
int main() {
  int radix = 2;
  for (int d_4 = 0; d_4 < radix; d_4++) {
    for(int d_3 = 0; d_3 < radix; d_3++) {
      for(int d_2 = 0; d_2 < radix; d_2++ ) {
          for (int d = 0; d < radix; d++) {
              printf("%d%d%d%d\n", d_4, d_3, d_2, d);
          }
      }
    }
  }
  return 0;
}
