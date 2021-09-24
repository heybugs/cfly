// 2. 大家都知道菜市的价格每天都在波动，下边我用文字描述，你写成代码
// 将下边几种常见菜名的价格定义为符号常量
// 今天的平均菜价（单位是元 / 千克，1 斤等于 0.5 千克）：
//番茄（3 .7），芥蓝（7），西芹（1.3），空心菜（8），洋葱（2.4），油菜（9），黄瓜（6.3），白萝卜（0.5）
//计算小明买 2 斤番茄、1 斤空心菜、1 斤油菜需要支付的价格，并打印出来
// 计算小红买 3 斤西芹，半斤洋葱，5 斤黄瓜需要支付的价格，并打印出来
// 计算小甲鱼买 10 斤黄瓜和 20 斤白萝卜需要支付的价格，并打印出来

#include <stdio.h>

#define TOMATO 3.7
#define CABIGE 7
#define XIQIN 1.3
#define KXC 8
#define YC 2.4
#define YOUC 9
#define HG 6.3
#define BLB 0.5

int main()
{
  double xm_price = (2 * TOMATO + KXC + YOUC) * 0.5;
  printf("%.2f\n", xm_price);
  // TODO why 这样写为啥不对？
  // double xh_price = 3 / 2 * XIQIN + 5 / 2 * HG + 0.5 / 2 * YC;
  // double xjy_price = 10 / 2 * HG + 20 / 2 * BLB;

  double xh_price = (3 * XIQIN + 5 * HG + 0.5 * YC) * 0.5;
  double xjy_price = (10 * HG + 20 * BLB) * 0.5;
  printf("小明共花费：%.2f元\n 小红共花费：%.2f元\n 小甲鱼共花费： %.2f元\n", xm_price, xh_price, xjy_price);
  return 0;
}