#include <stdio.h>

#define f(n) 2 * n

int main()
{
  printf("%d", f(3 + 2)); //8 f(2*3+2)
  return 0;
}