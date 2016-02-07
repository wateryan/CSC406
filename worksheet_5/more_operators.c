#include <stdio.h>
#include <stdlib.h>

int main () {
  int a = 12; //	movl	$12, -56(%rbp)
  int b = 34; // 	movl	$34, -52(%rbp)
  int c = a; //	movl	-56(%rbp), %eax; 	movl	%eax, -48(%rbp)
  int d = c + d; // 	addl	%eax, -44(%rbp)
  int e = 0; // 	movl	$0, -40(%rbp)
  int f = d << 2; //	movl	%eax, -36(%rbp)
  int g = e >> 3; //	movl	%eax, -32(%rbp)
  int h = d & e;
  int i = d | e;
  int j = ~i;

  int *p = &a;
  *p = 56;
  p = &b;
  *p = 78;

  return 0;
}
