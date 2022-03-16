// 난생처음 C언어 프로그래밍
// Chapter 10(Section 04)

#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3 };

    memset(arr, 0, sizeof(arr));

    for(int i = 0; i < 3; i++)
    {
        printf("a[%d] = %d\r\n", i, arr[i]);
    }
}