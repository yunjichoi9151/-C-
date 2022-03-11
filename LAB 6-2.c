// 난생처음 C언어 프로그래밍
// Chapter 06(Section 02)

#include <stdio.h>

int main()
{
    int i;
    int factorial = 1;

    for(i = 1; ; i++)
    {
        int next = factorial * i;
        if(next >= 1000)
            break;
        
        factorial = next;
    }

    printf("%d!: %d", i - 1, factorial);
}