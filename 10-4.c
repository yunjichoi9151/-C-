// 난생처음 C언어 프로그래밍
// Chapter 10(Section 02)

#include <stdio.h>

int main()
{
    int a;

    int* p = &a;
    *p = 1;

    printf("a: %d", a);
}