// 난생처음 C언어 프로그래밍
// Chapter 12(Section 01)

#include <stdio.h>

typedef struct STag
{
    int m;
} SType;

int main()
{
    struct STag s1;
    s1.m = 1;

    SType s2;
    s2.m = 2;

    printf("s1.m: %d, s2.m: %d", s1.m, s2.m);
}