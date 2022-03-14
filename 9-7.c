// 난생처음 C언어 프로그래밍
// Chapter 09(Section 02)

#include <stdio.h>

int main()
{
    int a = 1;

    {
        int a = 2;
        printf("%d\r\n", a);
    }

    printf("%d", a);
}