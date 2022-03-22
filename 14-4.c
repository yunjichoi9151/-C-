// 난생처음 C언어 프로그래밍
// Chapter 14(Section 01)

#include <stdio.h>

void PrintCalendar(int year, int month)
{
    printf("           %d년 %d월\r\n", year, month);
    printf("  --------------------------\r\n");
    printf("  일  월  화  수  목  금  토\r\n");
    printf("  --------------------------");

    int wday = GetWDay(year, month, 1);
    int lastday = GetLastDay(year, month);

    for(int i = 0; i < wday + lastday; i++)
    {
        if(i % 7 == 0)
            printf("\r\n");
        
        int day = i - wday + 1;
        if(day > 0)
            printf("%4d", day);
        else
            printf("%s", "    ");
    }
}