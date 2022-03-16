// 난생처음 C언어 프로그래밍
// Chapter 10(Section 03)

#include <stdio.h>

int main()
{
    char* pC = NULL;
    printf("pC + 1 = %p\r\n", pC + 1);

    int* pI = NULL;
    printf("pI + 1 = %p\r\n", pI + 1);

    double* pD = NULL;
    printf("pD + 1 = %p\r\n", pD + 1);
}