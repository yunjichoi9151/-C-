// 난생처음 C언어 프로그래밍
// Chapter 09(Section 04)
// 실제로는 각각 다른 파일에 존재함

// Function.c
int sg = 1;

// Main.c
#include <stdio.h>

static int sg = 2;

int main()
{
    printf("%d", sg);
}