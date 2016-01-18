#include <stdio.h>
#include <stdlib.h>

// Modify your previous C program to print the decimal and hexadecimal
// representations of numbers from 0 to 255. Ensure that each number is printed
// using the same number of characters each time (so that your output lines up).

int main() {
  int limit = 255;
  printf("Dec\t=>\tHex\n");
  for (int i = 0; i <= limit; i++) {
    printf("%3d\t->\t%3x\n", i, i);
  }
  return 0;
}
