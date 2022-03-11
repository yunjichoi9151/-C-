// 난생처음 C언어 프로그래밍
// Chapter 06(Section 05)

#include <stdio.h>

int main()
{
    for(int i = 2; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
            printf("%d + %d = %d\r\n", i, j, i * j);
        printf("\r\n");
    }
}