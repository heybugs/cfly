// 1. 定义量个宏，分别叫 S(r) 和 C(r)，通过它可以计算得到半径为 r 的圆的面积和周长
#include <stdio.h>
#define PI 3.14159
#define S(r) r *r *PI
#define C(r) 2 * PI *r

int main()
{
  int r = 5;
  // 注意这里的%.2f  数据的类型
  // printf("半径为%d的圆形，面积为%.2f 周长为%.2f\n", r, S(r), C(r));
  // TODO 如果这里不加冒号或者空格等 和中文分开 会吞掉第一个数字 why
  printf("半径为：%d的圆形，面积为：%.2f 周长为：%.2f\n", r, S(r), C(r));
  printf("半径为 %d的圆形，面积为 %.2f 周长为 %.2f\n", r, S(r), C(r));
  return 0;
}