/*
* Write a very simple hexdump program that dumps its standard input. You do not
* need to print the ASCII characters on the right-hand side; just the
* hexadecimal numbers. The remainder of the output format is up to you.
*
* You can read one byte from the standard input using the C function getchar().
* It returns an int which will be in the range 0-255 (a byte) if it read a
* character successfully. Otherwise they return the special EOF value (which is
* outside the range 0-255).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int ch;
  int char_count = 0;
  while ( (ch = getchar ()) != EOF ) {
    char_count++;
    if(char_count % 16 == 0) {
      printf ("%02x\n", ch);
      char_count = 0;
    } else {
      printf ("%02x ", ch);
    }
  }
  printf("\n");
}
