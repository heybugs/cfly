# 数据类型 问答题

## 0. 对于整型变量来说，long int 已经可以存放足够大的整数了，但若有一个更大的整数，应该尝试使用什么类型？

long long int

## 1. 就我们目前学到的所有数据类型中，C 标准规范存储空间最小的是？

我的答案 ：一个字节 char

正确答案： 答：\_Bool，因此只要求足够容纳 0 和 1 两个数即可，下边摘录自 C99 原文

> 6.2.5 Types
> ……
> An object declared as type \_Bool is large enough to store the values 0 and 1.

## 2. 我们说 printf() 是一个用于格式化打印的函数，那 sizeof() 是一个函数吗？

不是 why?

答：不是，虽然它跟 printf() 一样后边有个小括号，并在小括号中填入“参数”，但 sizeof 其实是一个特殊的操作符。注意，它是一个运算符，一个运算符，一个运算符！（重三遍）

## 3. C 语言定义一个字节等于多少比特位？

我的答案：1byte =8bit

参考答案： 答：C 语言并没有具体定义一个字节等于多少比特位，下边摘录自 C99 原文：

> 3.6
> byte
> ……
> A byte is composed of a contiguous sequence of bits, the number of which is implementation-defined. The least significant bit is called the low-order bit; the most significant bit is called the high-order bit.

大概意思就是一个字节被定义为连续比特位，具体大小由实现环境决定。不过通常我们约定俗成是一个字节等于八个比特位（1Byte == 8bit）

## 4. C 标准只规定一个数据类型的具体尺寸（其他数据类型都是规定相对范围），你知道是哪个数据类型如此特殊吗？

答：char 字符型，C 标准只规定 char 类型占一个字节的空间，其他数据类型均指定相对范围，具体大小依赖于实现环境。下边摘录自 C99 原文

> 3.7.1
> character
> single-byte character
> <C> bit representation that fits in a byte

## 5. 如有 int i = 123; 请指出下边错误的语句？

- A. sizeof i;
- B. sizeof 123;
- C. sizeof(i);
- D. sizeof(123);
- E. sizeof int;
- F. size of 123;

F 不对

E 也不对 注意，sizeof 运算符后边如果跟的是一个类型，那么需要加小括号：sizeof(int)。

## 6. unsigned int 和 int，哪个可以表示更大的整数？

unsigned int 因为 unsigned 表示无符号 符号也需要占空间的位置

答：由于默认 int 是 signed 的，即带符号位的整数（可以表示负数），需要用一半的存储空间来存放负数；而 unsigned int 则是完全用于存放正数，因此 unsigned int 可以表示更大的整数

## 7. 我们说“程序不会说谎”，言下之意是

一般有问题都是你代码写的有问题 别怪计算机

答：对于我们人类来说，世事无绝对，没有绝对的好人也没有绝对的坏人……计算机可不一样，要么就是“是”，要么就是“否”，绝不会存在模棱两可的情况。
