#include <stdio.h>
#include <stdlib.h>

int uadd_ok(unsigned char x, unsigned char y);

int main() {
  unsigned char a = 254;
  unsigned char b = 1;
  unsigned char c = 2;

  printf ("a = %hhu\n", a);
  printf ("b = %hhu\n", b);
  printf ("c = %hhu\n\n", c);

  if (uadd_ok (a, b)) {
    printf ("next addition will not overflow\n");
  } else {
    printf ("next addition will overflow\n");
  }
  printf ("%hhu+%hhu = %hhu\n\n", a, b, a+b);

  if (uadd_ok (a, c)) {
    printf ("next addition will not overflow\n");
  } else {
    printf ("next addition will overflow\n");
  }
  printf ("%hhu+%hhu = %hhu\n\n", a, c, a+c);

  return 0;
}

// If args can be added without overflow
int uadd_ok (unsigned char x, unsigned char y) {
  unsigned char sum = x + y;
  return sum >= x;
}
