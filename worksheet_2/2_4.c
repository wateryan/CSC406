

/*
2.4 Conversion Game (Dec to Hex)

Write a C program that:

generates a random number between 0 and 255 (inclusive)
prints the number in decimal representation
prompts the user to enter the same number in hexadecimal representation
interprets the string as a hexadecimal
if the user's input is the same number, print correct, otherwise print the correct value in hexadecimal representation
To generate a random for (1), use the following skeleton program:

For (2) use printf as usual.

For (3) use fgets as usual.

For (4) use strtol but replace the previous 10 (indicating the string is
Base-10, decimal representation) with 16 (indicating the string is Base-16,
hexadecimal representation).

For (5) remember that you can use the %x format specified with printf.

Play this game until you get it right almost every time.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  const int UPPER_BOUND = 256;
  const int BUFF_LEN = 100;

  srand ((unsigned) time (NULL)); // seed the PRNG, only do this once
  int value = rand () % UPPER_BOUND;
  printf("Please enter the hex equivalent of %d: ", value);
  char input[BUFF_LEN];
  fgets(input, BUFF_LEN, stdin);
  if(strtol(input, NULL, 16) == value) {
    printf("Correct!\n");
  } else {
    printf("Incorrect. Answer: %x\n", value);
  }
  return 0;
}
