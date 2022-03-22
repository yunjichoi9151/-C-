// 난생처음 C언어 프로그래밍
// Chapter 14(Section 01)

int GetLastDay(int year, int month)
{
    int lastday[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int Leap = 0;

    if(month == 2)
    {
        if(year % 400 == 0)
            Leap = 1;
        else if(year % 100 == 0)
            Leap = 0;
        else if(year % 4 == 0)
            Leap = 1;
    }

    return lastday[month - 1] + Leap;
}