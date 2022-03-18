// 난생처음 C언어 프로그래밍
// Chapter 11(Section 02)

#include <stdio.h>

void rounds(int* p)
{
    *p = (*p + 5) / 10 * 10;
}

int main()
{
    int a = 7;
    printf("%d 반올림: ", a);

    rounds(&a);
    printf("%d", a);
}