// 난생처음 C언어 프로그래밍
// Chapter 07(Section 04)

#include <stdio.h>

int main()
{
    int arr[8];
    int size = sizeof(arr);
    int length = size / sizeof(int);

    printf("배열의 크기:%d\r\n배열의 길이:%d", size, length);
}