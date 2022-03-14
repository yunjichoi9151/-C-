// 난생처음 C언어 프로그래밍
// Chapter 08(Section 01)

#include <stdio.h>

void f()
{
    printf("f 함수");
}

void g(void)
{
    return;
    printf("g 함수");
}

int main()
{
    f();
    g();
}