// 난생처음 C언어 프로그래밍
// Chapter 13(Section 04)
// 실제로는 각각 다른 파일에 존재함

// Function.c
double g_PI = 3.141592;

double PI()
{
    return p_PI;
}

// Main.c
#include <stdio.h>
#include "Function.c"

int main()
{
    printf("PI: %f", PI());
}