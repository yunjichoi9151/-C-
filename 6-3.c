// 난생처음 C언어 프로그래밍
// Chapter 06(Section 02)

#include <stdio.h>

int main()
{
    int Sum = 0;
    for(int i = 0; i < 100; i++)
        Sum = Sum + (i + 1);
    
    printf("총합: %d", Sum);
}