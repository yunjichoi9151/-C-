// 난생처음 C언어 프로그래밍
// Chapter 09(Section 02)

#include <stdio.h>

int main()
{
    int r;

    for(int i = 2; i < 10; i++)
    {
        r = i;
        for(int i = 1; i < 10; i++)
        {
            printf("%d * %d = %d\r\n", r, i, r * i);
        }
        printf("\r\n");
    }
}