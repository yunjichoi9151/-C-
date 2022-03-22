// 난생처음 C언어 프로그래밍
// Chapter 14(Section 01)

#define _CRT_SECURE_NO_WARNINGS
#include <time.h>

int GetWDay(int year, int month, int day)
{
    struct tm t;
    memset(&t, 0, sizeof(t));

    t.tm_year = year - 1900;
    t.tm_mon = month - 1;
    t.tm_mday = day;
    mktime(&t);

    return t.tm_wday;
}