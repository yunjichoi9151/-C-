// 난생처음 C언어 프로그래밍
// Chapter 11(Section 02)

#include <stdio.h>

void func(int* p)
{
    *p = 1;
}

int main()
{
    int a = 0;
    func(&a);

    printf("%d", a);
}