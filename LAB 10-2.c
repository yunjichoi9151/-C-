// 난생처음 C언어 프로그래밍
// Chapter 10(Section 03)

#include <stdio.h>

int main()
{
    int arr[32];
    char* p = (char*)arr;

    for(int i = 0; i < sizeof(arr); i++)
    {
        *p = 0b11111111;
        p++;
    }
}