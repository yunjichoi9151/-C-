// 난생처음 C언어 프로그래밍
// Chapter 12(Section 02)

#include <stdio.h>

typedef struct
{
    int m[2];
} SArray;

int main()
{
    int arr1[2] = { 1, 2 };
    //int arr2[2] = arr1;
    int arr3[2];
    //arr3 = arr1;

    SArray sarr1 = { { 1, 2 } };
    SArray sarr2 = sarr1;
    SArray sarr3;
    sarr3 = sarr1;

    printf("sarr2: {%d, %d}\r\n", sarr2.m[0], sarr2.m[1]);
    printf("sarr3: {%d, %d}", sarr3.m[0], sarr3.m[1]);
}