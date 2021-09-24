//  指针--一个内存地址
//  指针变量 -- 这个变量存储的值 不是一个具体的值 而是一个值的内存地址

// TODO 我们不能直接知道某个值的地址？ 但是我们可以通过指针变量 间接的获取普通变量的地址
#include <stdio.h>

int main()
{
  char a = 'F';
  int f = 123;
  // char *pa = a; warning: initialization of 'char *' from 'char' makes pointer from integer without a cast [-Wint-conversion]
  // int *pf = f;  warning: initialization of 'int *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
  char *pa = &a; // & 取地址符号
  int *pf = &f;
  printf("the value of a is %c, the value of pa is %C\n", a, *pa);
  printf("the value of f is %d, the value of pf is %d\n", f, *pf);

  *pa = 'c';
  *pf += 1;
  printf("now a=%c\n", *pa);
  printf("now f=%d\n", *pf);
  printf("size of a = %d\n", sizeof(pa));
  printf("size of f = %d\n", sizeof(pf));
  printf("adress of a is %p\n", pa);
  printf("adress of f is %p\n", pf);

  return 0;
}