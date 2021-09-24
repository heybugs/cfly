#include <stdio.h>
int main(void)
{
  int i;
  scanf("please input a int number %d", &i); //&i 表示变量 i 的地址，&是取地址符
  printf("i = %d\n", i);
  return 0;
}