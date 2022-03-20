// 난생처음 C언어 프로그래밍
// Chapter 13(Section 04)

#include <stdio.h>

#define MULTIPLY(x, y)  x * y

int main()
{
    int a = MULTIPLY(1 + 1, 1 + 1);
    printf("a: %d", a);
}