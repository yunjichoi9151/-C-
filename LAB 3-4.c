// 난생처음 C언어 프로그래밍
// Chapter 03(Section 05)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char upper, lower;

    printf("알파벳 대문자를 입력하세요.\r\n");

    scanf("%c", &upper);
    lower = 'a' + upper - 'A';
    printf("소문자: %c", lower);
}