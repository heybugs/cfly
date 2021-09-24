// 问题：写一个华氏度到摄氏度的转换程序，用户输入华氏度，程序计算并输出对应的摄氏度。
//  c = (f-32)*5/9
#include <stdio.h>

int main()
{
  float hTemp;
  float putemp;
  printf("please input hua shi temperature:");
  // NOTE 1 这里少写了 取地址符号 & 导致结果错误
  // NOTE 2 一开始这里的写的 %.2f 为什么不对呢 TODO
  scanf("%f", &hTemp);
  putemp = (hTemp - 32) * 5 / 9;
  // NOTE 2 同理第一数据类型 一开始这里的写的 %.2f 为什么不对呢 TODO
  printf("%f huashi temperature tanceform to normal is %.2f\n", hTemp, putemp);

  return 0;
}