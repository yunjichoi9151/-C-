// 난생처음 C언어 프로그래밍
// Chapter 12(Section 01)

#include <stdio.h>

typedef struct
{
    int m1;
    int m2;
    double m3;
} SType;

int main()
{
    SType s = { 1, 2, 3.14 };
    printf("m1: %d, m2: %d, m3: %f", s.m1, s.m2, s.m3);

    //s = { 1, 2, 3.14 };
}
