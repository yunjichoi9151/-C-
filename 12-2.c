// 난생처음 C언어 프로그래밍
// Chapter 12(Section 01)

#include <stdio.h>

struct STag
{
    int m;
};

int main()
{
    struct STag s;
    s.m = 3;

    printf("s.m: %d", s.m);
}