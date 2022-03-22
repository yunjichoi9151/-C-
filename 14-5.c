// 난생처음 C언어 프로그래밍
// Chapter 14(Section 01)

int main()
{
    int year, month;

    do
    {
        printf("연도를 입력하세요 > ");
        scanf("%d", &year);
    }
    while(year < 1);

    do
    {
        printf("월을 입력하세요 > ");
        scanf("%d", &month);
    }
    while(month < 0);

    printf("\r\n");

    if(month == 0)
    {
        for(int i = 1; i <= 12; i++)
        {
            PrintCalendar(year, i);
            printf("\r\n\r\n");
        }
    }
    else
        PrintCalendar(year, month);
}