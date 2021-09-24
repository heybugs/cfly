// 1. 舍罕王的失算
/**
 * 相传国际象棋是古印度舍罕王的宰相达依尔发明的。舍罕王十分喜爱象棋，决定让宰相自己选择何种赏赐。这位聪明的宰相指着 8 x 8 共 64 格的象棋说：“陛下，请您赏给我一些麦子吧。就在棋盘的第 1 格放 1 粒，第 2 格放 2 粒，第三格放 4 粒，以后每一格都比前一格增加一倍，依此放完棋盘 64 格，我就感激不尽了。”。舍罕王听了达依尔这个“小小”的要求，想都没想就满口答应下来。结果在给达依尔麦子时舍罕惊奇地发现要给的麦子比自己想象的要多得多，于是他进行了计算，结果令他大惊失色。
 * 
 * 请问，舍罕王要兑现他的许诺共要多少粒麦子赏赐他的宰相？
 * 如果每25000粒麦子重1kg，那么舍罕王应该给予达依尔多少公斤麦子？
*/
#include <stdio.h>
#include <math.h>

int main()
{
  // TODO 如果我这里不写成 unsigned long long 呢？
  unsigned long long sum = 0;
  unsigned long long weight;
  unsigned long long temp;

  int i;

  for (i = 0; i < 64; i++)
  {
    temp = pow(2, i);
    sum += temp;
    // TODO why 为什么这么写不对
    // sum += pow(2, i);
  }

  weight = sum / 25000;
  // TODO 注意这里的 unsigned long long 类型 为 %llu  是英文字母ll 不是数字11
  printf("sum is %llu    \nweight is %llu\n", sum, weight);

  return 0;
}