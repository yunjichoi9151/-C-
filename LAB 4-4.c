// 난생처음 C언어 프로그래밍
// Chapter 04(Section 05)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    printf("정수를 입력하세요.\r\n");

    scanf("%d", &n);
    n || printf("0입니다.");
    n && printf("0이 아닙니다.");
}