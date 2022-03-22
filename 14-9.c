// 난생처음 C언어 프로그래밍
// Chapter 14(Section 03)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    for(int i = 0; i < 3; i++)
        printf("%d\r\n", rand());
}