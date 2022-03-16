// 난생처음 C언어 프로그래밍
// Chapter 10(Section 04)

#include <stdio.h>

int main()
{
    int i;

    int* pI = &i;
    double* pD = &i;
    void* pV = &i;

    pI = pD;
    pI = pV;
}