// 난생처음 C언어 프로그래밍
// Chapter 12(Section 02)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

typedef struct
{
    char gender;
    char name[9];
    int age;
    int salary;
} PersonInfo;

int main()
{
    PersonInfo* p = malloc(sizeof(PersonInfo));

    printf("성별(1:남성, 2:여성)을 입력하세요 > ");
    scanf("%c", &p->gender);

    printf("이름을 입력하세요 > ");
    scanf("%s", p->name);

    printf("나이를 입력하세요 > ");
    scanf("%d", &p->age);

    printf("연소득(만원)을 입력하세요 > ");
    scanf("%d", &p->salary);
}