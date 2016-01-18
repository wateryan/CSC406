/*

Write a C program to:

generate a random numbers x in the range 0 to 255 (inclusive)
print it as binary
print the results of x << n where n ranges from 0 to 31 (inclusive)
print the results of x >> n where n ranges from 0 to 31 (inclusive)
Run this until you are comfortable with calculating the results yourself.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *to_binary(unsigned int x);

int main() {
  const int UPPER_BOUND = 256;
  const int N_MAX = 31;
  int x = rand() % UPPER_BOUND;
  int y = rand() % UPPER_BOUND;

  printf("x:\t%s\n", to_binary(x));
  printf("y:\t%s\n", to_binary(y));

  for(int i = 0; i <= N_MAX; i++) {
    printf("x << %2d = %s\n", i, to_binary(x << i));
    printf("x << %2d = %s\n", i, to_binary(y << i));
  }
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
