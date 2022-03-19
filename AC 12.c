// 난생처음 C언어 프로그래밍
// Chapter 12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

typedef enum
{
    MALE = 1,
    FEMALE = 2
} Gender;

typedef struct
{
    int serial;
    char enabled;
    Gender gender;
    char name[9];
    int age;
    int salary;
} PersonInfo;

PersonInfo** g_pPI;
int g_PIIndex;
int g_PISize = 4;
int g_Serial;

void Register(PersonInfo* pPerson)
{
    if(!g_pPI)
        g_pPI = malloc(sizeof(PersonInfo*) * g_PISize);

    pPerson->serial = g_Serial++;
    pPerson->enabled = 1;
    
    if(g_PIIndex > g_PISize)
    {
        g_PISize += 4;
        g_pPI = realloc(g_pPI, sizeof(PersonInfo*) * g_PISize);
    }

    g_pPI[g_PIIndex++] = pPerson;
}

void ShowStatistics()
{
    int TotalAge = 0, TotalSalary = 0;
    for(int i = 0; i < g_PIIndex; i++)
    {
        TotalAge += g_pPI[i]->age;
        TotalSalary += g_pPI[i]->salary;
    }

    printf("평균나이: %f\r\n", (double)TotalAge / g_PIIndex);
    printf("평균연소득: %f", (double)TotalSalary / g_PIIndex);
}

int main()
{
    int menu;
    do
    {
        printf("1: 개인 정보 입력, 2: 통계 처리 중 선택하세요 > ");
        scanf("%d", &menu);

        if(menu == 1)
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

            Register(p);
        }
    }
    while (menu == 1);
    
    ShowStatistics();
}