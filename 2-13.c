// 난생처음 C언어 프로그래밍
// Chapter 02(Section 05)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char input[128] = { 0 };

    printf("입력> ");
    scanf("%[^\n]s", input);

    printf("출력> %s", input);
}