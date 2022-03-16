// 난생처음 C언어 프로그래밍
// Chapter 10(Section 03)

#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    int* p = arr;

    printf("%d, %d, %d", p[0], p[1], p[2]);
}