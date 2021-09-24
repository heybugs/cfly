#include <stdio.h>
int main(void)
{
  int a, b, c;

  printf("请输入三个数字：");
  // 注意这里输入数字的时候也要输入逗号隔开数字 而且逗号需要是英文状态的下的（好的做法是这里写提示告诉用户）
  scanf("%d, %d, %d", &a, &b, &c);
  printf("%d, %d, %d\n", a, b, c);
  return 0;
}