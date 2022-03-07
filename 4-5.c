// 난생처음 C언어 프로그래밍
// Chapter 04(Section 04)

#include <stdio.h>

int main()
{
    int c1 = (1 == 1);
    int c2 = (1 != 1);
    int c3 = (2 > 1);
    int c4 = (2 < 1);
    int c5 = (2 >= 1);
    int c6 = (2 <= 1);

    printf("%d %d %d %d %d %d", c1, c2, c3, c4, c5, c6);
}