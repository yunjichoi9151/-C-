// 난생처음 C언어 프로그래밍
// Chapter 11(Section 03)

#include <stdio.h>

int main()
{
    // int arr[1024 * 1024 * 4] = { 0 };

    int size = 1024 * 1024 * 4 * sizeof(int);
    int* parr = malloc(size);
    free(parr);
}