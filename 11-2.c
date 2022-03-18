// 난생처음 C언어 프로그래밍
// Chapter 11(Section 01)

#include <stdio.h>

int main()
{
    int arr[2] = { 1, 2 };

    int* p = &arr;
    printf("%d, %d\r\n", p[0], p[1]);

    int (*parr)[2] = &arr;
    printf("%d, %d", (*parr)[0], (*parr)[1]);
}