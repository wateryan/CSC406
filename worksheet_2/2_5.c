
/*
Now do the reverse. Write a C program that:

generates a random number between 0 and 255 (inclusive)
prints the number in hexadecimal representation
prompts the user to enter the same number in decimal representation
interprets the string as a decimal
if the user's input is the same number, print correct, otherwise print the
correct value in decimal representation.

Play this game until you get it right almost every time.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const int UPPER_BOUND = 256;
  const int BUFF_LEN = 100;

  srand ((unsigned) time (NULL)); // seed the PRNG, only do this once
  int value = rand () % UPPER_BOUND;
  printf("Please enter the dec equivalent of %x: ", value);
  char input[BUFF_LEN];
  fgets(input, BUFF_LEN, stdin);
  if(strtol(input, NULL, 10) == value) {
    printf("Correct!\n");
  } else {
    printf("Incorrect. Answer: %d\n", value);
  }
  return 0;
}
