// 난생처음 C언어 프로그래밍
// Chapter 13(Section 05)

#include <stdio.h>

#define X 1

int main()
{
#if (X == 1)
    printf("X is 1");
#elif (X == 2)
    printf("X is 2");
#else
    printf("X is nothing");
#endif
}