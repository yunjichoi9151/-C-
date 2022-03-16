// 난생처음 C언어 프로그래밍
// Chapter 10(Section 02)

#include <stdio.h>

int main()
{
    int a = 0;
    char* p = (char*)&a;

    *(p + 0) = 0b11111111;
    *(p + 1) = 0b11111111;
    *(p + 2) = 0b11111111;
    *(p + 3) = 0b11111111;

    printf("%d", &a);
}