// 난생처음 C언어 프로그래밍
// Chapter 12(Section 05)

#include <stdio.h>

typedef union 
{
    long long a;
    int b;
} UType;

int main()
{
    UType u;
    u.a = 7;

    printf("u.a: %d, u.b: %d", u.a, u.b);
}