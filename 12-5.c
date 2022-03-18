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
    SType a = { 1, {2, 3} };
    SType b = a;
    SType c;
    c = a;

    printf("b: {%d, %d, %d}\r\n", b.m, b.arr[0], b.arr[1]);
    printf("c: {%d, %d, %d}", c.m, c.arr[0], c.arr[1]);
}