/**
 * 要求：
要求用户输入一个十进制整数（按下回车完成输入）
计算出该整数值的五次方
打印计算结果

程序实现如下:
输入一个整数：128
128的5次方是：xxxx
*/

#include <stdio.h>
#include <math.h>

int main()
{
  int userInput;
  printf("输入一个整数：");
  scanf("%d", &userInput); // 获取用户输入的值
  int result = pow(userInput, 5);
  printf("%d 的5次方是： %d\n", userInput, result);
  return 0;
}