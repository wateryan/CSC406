/*

Write a C program to print the sizes of the following types (on the system for which it is compiled).

char
short
int
long
float
double
long double
void *

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  printf ("sizeof (char) = %ld\n", sizeof(char));
  printf ("sizeof (short) = %ld\n", sizeof(short));
  printf ("sizeof (int) = %ld\n", sizeof(int));
  printf ("sizeof (long) = %ld\n", sizeof(long));
  printf ("sizeof (float) = %ld\n", sizeof(float));
  printf ("sizeof (double) = %ld\n", sizeof(double));
  printf ("sizeof (long double) = %ld\n", sizeof(long double));
  printf ("sizeof (void *) = %ld\n", sizeof(void *));  
  return 0;
}
