// 난생처음 C언어 프로그래밍
// Chapter 12(Section 04)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

typedef struct
{
    int serial;
    char enabled;
    char gender;
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