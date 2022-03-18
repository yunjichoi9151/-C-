// 난생처음 C언어 프로그래밍
// Chapter 12(Section 02)

#include <stdio.h>

typedef struct
{
    int m;
    int arr[2];
} SType;

int main()
{
    SType s;
    s.m = 1;
    s.arr[0] = 2;
    s.arr[1] = 3;

    printf("s: {%d, %d, %d}", s.m, s.arr[0], s.arr[1]);
}