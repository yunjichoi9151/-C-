// 난생처음 C언어 프로그래밍
// Chapter 06(Section 02)

#include <stdio.h>

int main()
{
    int i = 0;
    int Sum = 0;

    for(;;)
    {
        Sum = Sum + (i + 1);
        i++;

        if(i > 99)
            break;
    }

    printf("총합: %d", Sum);
}