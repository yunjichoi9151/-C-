// 난생처음 C언어 프로그래밍
// Chapter 06(Section 02)

#include <stdio.h>

int main()
{
    int i = 0;
    int Sum = 0;
    for(i = 0; Sum < 3000; i++)
        Sum = Sum + (i + 1);
    
    printf("1 +...+ %d >= %d", i, Sum);
}