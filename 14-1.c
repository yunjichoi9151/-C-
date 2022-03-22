// 난생처음 C언어 프로그래밍
// Chapter 14(Section 01)

#include <stdio.h>
#include <time.h>

int main()
{
    struct tm t;
    memset(&t, 0, sizeof(t));

    t.tm_year = 2022 - 1900;
    t.tm_mon = 0;
    t.tm_mday = 1;
    mktime(&t);

    char* wday[7] = {"일", "월", "화", "수", "목", "금", "토"};
    printf("%s요일", wday[t.tm_wday]);
}