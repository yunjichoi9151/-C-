// 난생처음 C언어 프로그래밍
// Chapter 03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i1, i2;
    float f;
    printf("정수를 입력하세요.\r\n");

    scanf("%d", &i1);
    f = i1;
    i2 = f;

    printf("오차: %d", i1 - i2);
}