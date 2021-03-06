# 取值范围 问答题

## 0. CPU 能读懂的最小单位是什么？

二进制的单位 比特（bit）；比特位

## 1. 一个字节可以表示的最大 _带符号_ 整数是？

1byte = 8bit
最大 二进制 为 1 1 1 1 1 1 1 1 转为十进制 255
答：一个字节约定等于八个比特位（事实上 C 语言没有规定一个字节等于八个比特位，这只是约定俗成），因此一个字节可以表示最大的二进制数是 1111 1111。
但是 由于左边第一位是符号位，不能用于表示值的大小，因此一个字节可以表示的最大带符号整数是：0111 1111，转换成十进制数就是 127(pow(2,6)+pow(2,5)+pow(2,4)+pow(2,3)+pow(2,2)+pow(2,1)+pow(2,0))。)

[进制转换参考](https://fishc.com.cn/thread-67123-1-1.html)

## 2. 假设在一个机器上，用 64 位来存放 long long 的值，请问它最大可以存放一个多少位的十进制数？ TODO

答：既然是要存放最大的那个整数，我们取 **unsigned** long long（符号位别浪费了~），它可以表示的最大值是 2^64 – 1，即 18446744073709551615。这是一个 20 位的十进制整数。

## 3. 浮点数的取值范围如下表，请问 float 类型变量可以存放的最小值是？

答：-3.40282 \* 10^38

| 数据类型    | 字节数 | 取值范围（绝对值） |
| :---------- | :----- | :----------------- |
| float       | 4      | TODO               |
| double      | 8      | TODO               |
| long double | 16     | TODO               |

## 4. 请写出以下二进制数（补码）对应的十进制数。

- A. 0000 1100
- B. 1100 1100
- C. 1010 1010
- D. 1111 1111
- E. 1000 0000

思路如下：

- A. 0000 1100 -> 2^3 + 2^2 = 8 + 4 = 12
- B. 1100 1100 –> -2^7 + 2^6 + 2^3 + 2^2 = -128 + 64 + 8 + 4 = -52
- C. 1010 1010 –> -2^7 + 2^5 + 2^3 + 2 = -128 + 32 + 8 + 2 = -86
- D. 1111 1111 -> -2^7 + 2^6 + 2^5 + 2^4 + 2^3 + 2^2 + 2 + 1 = -1
- E. 1000 0000 –> -2^7 = -128

## 5. 请写出以下十进制数在内存中的二进制存放形式（8 位，补码）。

答：带符号数在内存中以补码的形式保存，正数的补码是其二进制本身，负数则通过对其绝对值的二进制取反加一计算得到。5N=v-\*"0Lu
你当然可以通过辗转相除的方法将十进制数转换为二进制数（不过我嫌那样太慢了）

然而下边是小甲鱼的思考过程，你理解其中的原理吗？

- A. 8 -> 0000 1000
- B. 27 –> 16 + 8 + 2 + 1 –> 0001 1011
- C. 99 -> 64 + 32 + 2 + 1 -> 0110 0011
- D. -8 -> 1000 1000 –> 1111 0111 –> 1111 1000
- E. -126 -> -128 + 2 -> 1000 0000 + 0000 0010 -> 1000 00103

## 6. 写出下列有符号数对应的无符号数的十进制值（8 位）。

答：以下是小甲鱼的思考过程，你理解其中的原理吗？

- A. 13 –> 13
- B. 122 –> 122
- C. -1 -> -128 + 127 -> 1000 0000 + 0111 1111 = 1111 1111 -> 255
- D. -14 -> 1000 1110 -> 1111 0001 -> 1111 0010 -> 242
- E. -128 -> 1000 0000 -> 128
