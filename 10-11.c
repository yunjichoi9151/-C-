// 난생처음 C언어 프로그래밍
// Chapter 10(Section 03)

#include <stdio.h>

int main()
{
    int* p;

    int s1 = sizeof(*(char*)p);
    int s2 = sizeof(*p);

    printf("s1: %d, s2: %d", s1, s2);
}