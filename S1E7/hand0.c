// 0. 填充下边代码，使得打印结果为：-1 和 255。
// TODO

#include <stdio.h>

int main()
{
  // tips 在这里声明变量i j
  int i, j;
  i = 255;
  j = 255;

  printf("%d", i); // 让这里输出 -1
  printf("%d", j); // 这里输出 255
  return 0;
}

/**
 * 答：char 类型占一个字节的空间，因此 unsigned char 的取值范围是 0~255，signed char 的取值范围则是 -128~127。十进制的 255 即二进制的 11111111，signed char 第一位为符号位，因此其值转换为十进制后是 -1。
 * 
 * printf 函数使用 %c 打印 char 类型的字符，使用 %d 和 %u 则打印其对应的 ASCII 码（其中 %d 打印带符号数，%u 打印无符号数）。signed char 和 unsigned char 使用 hh 说明其长度。
*/

/**
 * #include <stdio.h>

int main()
{
        signed char i;
        unsigned char j;

        i = 255;
        j = 255;

        printf("signed char %hhd\n", i);
        printf("unsigned char %hhu\n", j);

        return 0;
}
 * 
*/