// 난생처음 C언어 프로그래밍
// Chapter 09(Section 01)

#include <stdio.h>

void f()
{
    int a = 1;
}

void g()
{
    int a = 2;
}

int main()
{
    f();
    g();
    printf("%d", a);
}