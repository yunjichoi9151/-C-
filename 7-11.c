// 난생처음 C언어 프로그래밍
// Chapter 07(Section 03)

#include <stdio.h>

int main()
{
    int arr[2][3] = { { 11, 12, 13 }, { 21, 22, 23 } };

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\r\n");
    }
}