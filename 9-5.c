// 난생처음 C언어 프로그래밍
// Chapter 09(Section 01)

#include <stdio.h>

void f()
{
    int a[1] = { 7 };
    printf("%d\r\n", a[0]);
}

void g()
{
    int b[1];
    printf("%d\r\n", b[0]);
}

int main()
{
    f();
    g();
}
