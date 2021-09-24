// 1. 下边我用文字描述，你写成代码：版权属于：bbs.fishc.com
// ~m^fiB,@Fel}Srq![7+ 3
// 声明一个变量 r，用来存放圆的半径
// 声明一个变量 c，用来存放圆的周长
// 声明一个变量 s，用来存放圆的面积
// 将 5 赋值给变量 r
// 计算圆的周长（公式：2 * 3.14 * r），并赋值给变量 c
// 计算圆的面积（公式：3.14 * r * r），并赋值给变量 s
// 打印圆的周长和面积（精确到小数点后两位），格式如下：

#include <stdio.h>

int main(){
    int r;
    // float c;
    // float s;
    // double c;
    // double s;

    double c ,s;
    float PI = 3.14;
    r = 5;
    c = 2*PI*r;
    s = PI*r*r;
    printf("圆的周长为：%.2f\n",c);
    printf("圆的面积为：%.2f\n",s);

    return 0;
}