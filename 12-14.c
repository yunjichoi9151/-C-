// 난생처음 C언어 프로그래밍
// Chapter 12(Section 05)

#include <stdio.h>

typedef union 
{
    int a;
    int b;
    int c;
} UType;

int main()
{
    UType u;
    u.a = 7;

    printf("u.a: %d, u.b: %d, u.c: %d", u.a, u.b, u.c);
}