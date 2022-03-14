// 난생처음 C언어 프로그래밍
// Chapter 08(Section 02)

#include <stdio.h>

void func(int param)
{
    param = 2;
}

int main()
{
    int arg = 1;

    printf("Before: %d\r\n", arg);
    func(arg);
    printf("After: %d", arg);
}