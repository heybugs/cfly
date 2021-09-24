// 0. 下边我用文字描述，你写成代码：
// 声明两个变量，一个叫 a，一个叫 b
// 将 3 赋值给变量 b
// 将变量 b 的值赋值给变量 a
// 将变量 b 乘以 2 并赋值给 b（代码这么写：b = b * 2）
// 打印变量 a 的值
// 打印变量 b 的值
#include <stdio.h>

int main()
{
    int a;
    int b;
    b = 3;
    a = b;
    b *= 2;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}