// 난생처음 C언어 프로그래밍
// Chapter 04(Section 07)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int age;
    printf("나이를 입력하세요.\r\n");
    scanf("%d", &age);
    printf("%s", age < 20 ? "미성년자" : "성인");
}