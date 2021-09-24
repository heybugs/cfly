// https://www.runoob.com/cprogramming/c-function-scanf.html
#include <stdio.h>
int main(void)
{
  int a, b, c;

  printf("请输入三个数字：");
  scanf("%d%d%d", &a, &b, &c); // 注意 输入的时候这里要写空格 不然会以为输入了一个数字
  printf("%d,%d,%d\n", a, b, c);
  return 0;
}