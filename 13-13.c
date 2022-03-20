// 난생처음 C언어 프로그래밍
// Chapter 13(Section 04)

#include <stdio.h>

#define MACRO_X 1
#define MACRO_Y 2

int main()
{
    int x = MACRO_X;
    char* y = "MACRO_Y";

    printf("x: %d, y: %s", x, y);
}