// 난생처음 C언어 프로그래밍
// Chapter 05(Section 04)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("수학 점수를 입력하세요!\r\n");

    int math;
    scanf("%d", &math);

    switch(math)
    {
    case 100: printf("매우 잘함"); break;
    case 90:
    case 80: printf("잘함"); break;
    case 70:
    case 60:
    case 50: printf("보통"); break;
    default: printf("노력이 필요함"); break;
    }
}