/*

Write a C program to test the following print_binary function. It prints an int
in binary representation (a bit string with most-significant bit on the left and
least-significant bit on the right)

*/

#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned int x);

int main() {
  const int LIMIT = 256;
  for (int i = 0; i < LIMIT; i++) {
    printf("%3d decimal = ", i);
    print_binary(i);
    printf(" binary\n");
  }
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
