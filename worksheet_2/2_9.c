/*

Write a C program to:

generate two random numbers x and y in the range 0 to 255 (inclusive)
print them as binary
print the results of running x && y, x || y, !x, and !(!x) as binary
Run this until you are comfortable with calculating the results yourself.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *to_binary(unsigned int x);

int main() {
  const int UPPER_BOUND = 256;
  int x = rand() % UPPER_BOUND;
  int y = rand() % UPPER_BOUND;

  printf("x:\t%s\n", to_binary(x));
  printf("y:\t%s\n", to_binary(y));

  printf("x && y =%s\n", to_binary(x && y));
  printf("x || y =%s\n", to_binary(x || y));
  printf("!x     =%s\n", to_binary(!x));
  printf("!(!x)  =%s\n", to_binary(!(!(x))));

  return 0;
}

char *to_binary (unsigned int x) {
  char *binary = (char*) malloc(x);
  for (int i = 31; i >= 0; i--) {
    if ((x >> i) & 1) {
      strcat(binary, "1");
    } else {
      strcat(binary, "0");
    }
  }
  return binary;
}
