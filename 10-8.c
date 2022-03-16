// 난생처음 C언어 프로그래밍
// Chapter 10(Section 03)

#include <stdio.h>

int main()
{
    int* pI = NULL;
    printf("++pI: %p\r\n", ++pI);
    printf("--pI: %p\r\n", --pI);
    printf("pI++: %p\r\n", pI++);
    printf("pI--: %p\r\n", pI--);

    int a;
    //++(&a), --(&a), (&a)++, (&a)--;
}