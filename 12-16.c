// 난생처음 C언어 프로그래밍
// Chapter 12(Section 05)

#include <stdio.h>

typedef union 
{
    double a;
    int b;
} UType;

int main()
{
    UType u;
    u.a = 3.141592;

    printf("u.a: %f, u.b: %d", u.a, u.b);
}