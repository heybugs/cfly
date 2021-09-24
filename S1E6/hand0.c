// 0. 问题：求 1^2 + 2^3 + 3^4 + 4^5 + 5^6 的值？（1^2 表示 1 的 2 次方）
#include <stdio.h>
#include <math.h> // 注意引入这个 TODO

// TODO 执行命令 gcc -lm .\hand0.c 注意 -lm的使用
// 不加也可以 应该是版本不一样了  使用了这个math预处理文件就ok
// 毕竟这套教材也比较早了 15年的教程 现在 21年 5、6年了

int main()
{
  int result, i;

  for (i = 1; i <= 6; i++)
  {
    result += pow(i, 2);
  }
  printf("the result is %d", result);
  return 0;
}

/**
 * 
 * gcc -lm .\hand0.c
   10 |     result += pow(i, 2);
      |               ^~~
.\hand0.c:10:15: warning: incompatible implicit declaration of built-in function 'pow'
.\hand0.c:3:1: note: include '<math.h>' or provide a declaration of 'pow'
    2 | #include <stdio.h>
  +++ |+#include <math.h>
    3 |
 * 
 * 
 * 
*/