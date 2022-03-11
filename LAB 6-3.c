// 난생처음 C언어 프로그래밍
// Chapter 06(Section 03)

#include <stdio.h>

int main()
{
    int i = 1;
    int factorial = 1;

    while(factorial < 1000)
    {
        i++;
        factorial += i;
    }

    printf("%d!: %d", i, factorial);
}