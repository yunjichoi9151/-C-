// 난생처음 C언어 프로그래밍
// Chapter 10(Section 03)

#include <stdio.h>

int main()
{
    int q = 0;
    int* p = &q;

    *p = 1;
    printf("q: %d, *p: %d", q, *p);
}