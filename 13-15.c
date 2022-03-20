// 난생처음 C언어 프로그래밍
// Chapter 13(Section 04)

#include <stdio.h>

#define Y (X + 1)
#define X (Y + 1)

int main()
{
    printf("Y: %d", Y);
}