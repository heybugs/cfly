// 0. 修改下边代码，使用符号常量 NL，代替转义字符 '\n'
#include <stdio.h>

#define NL '\n' // 注意这里不要加分号

int main()
{

  printf("Line1%c", NL);
  printf("Line2%c", NL);

  return 0;
}