// 2. 最后一题考一下大家对 printf 函数的掌握程度，要求程序可以打印下边内容：,DxJXi
//  打印5个字符 F i s h C
// 前边用 空格 填充  ：   2015
// 前辈用0填充： 0000002015
// 右对齐 保留2位  3.14
// 右对齐 保留3位  3.142
// 右对齐 指数形式 5.200000e+05
// 左对齐 指数形式 5.200000e+05


// int main()
// {
//     printf("F i s h C\n");
//     printf("   %d\n", 2015);
//     printf("000000%d\n", 2015);
//     printf("%.2f\n", 3.14);
//     printf("%.3f\n", 3.142);

//     return 0;
// }

// TODO why?

#include <stdio.h>

int main()
{
    printf("打印五个字符：%c %c %c %c %c\n", 70, 105, 115, 104, 67);
    printf("前边用 填充：%10d\n", 2015);
    printf("前边用0填充：%010d\n", 2015);
    printf("右对齐，保留2位：%10.2f\n", 3.1416);
    printf("左对齐，保留3位：%-10.3f\n", 3.1416);
    printf("右对齐，指数形式：%10e\n", 520000.0);
    printf("左对齐，指数形式：%-10E\n", 520000.0);

    return 0;
}
