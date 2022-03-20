// 난생처음 C언어 프로그래밍
// Chapter 13(Section 04)

#include <stdio.h>

#define MULTIPLY(x, y)  x * y

int main()
{
    int a = MULTIPLY(2, 3);
    int b = MULTIPLY(2, 3) / MULTIPLY(2, 3);
    printf("a: %d, b: %d", a, b);
}