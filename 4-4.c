// 난생처음 C언어 프로그래밍
// Chapter 04(Section 03)

#include <stdio.h>

int main()
{
    int a, b;
    
    a = 1;
    b = ++a;
    printf("a: %d, b: %d\r\n", a, b);

    a = 1;
    b = a++;
    printf("a: %d, b: %d", a, b);
}