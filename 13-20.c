// 난생처음 C언어 프로그래밍
// Chapter 13(Section 05)

#include <stdio.h>

#define ONE

#ifdef ONE
    int a = 1;
#else
    int a = 2;
#endif

int main()
{
    printf("a: %d", a);
}