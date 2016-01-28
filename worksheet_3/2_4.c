/*
 * Write a C program to test the print_binary function as in the previous
 * worksheet. Recall that it prints an int in binary representation (a bit
 * string with most-significant bit on the left and least-significant bit on the
 * right).
 *
 * However, this time pass in values of type int (which is a signed or two's
 * complement data type). You should pass in negative as well as positive values
 * to see their binary representation.
 */

#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned int x);

int main() {
  const int limit = 128;
  for(int i = 0; i <= limit; i++) {
    printf("%3d as binary: ", i);
    print_binary(i);
    printf("\n");
  }
  return 0;
}

void print_binary (unsigned int x) {
  for (int i = 31; i >= 0; i--) {
    if ((x >> i) & 1) {
      printf ("1");
    } else {
      printf ("0");
    }
  }
}
