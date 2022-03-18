// 난생처음 C언어 프로그래밍
// Chapter 11(Section 02)

#include <stdio.h>

void func(int arg[16])
{
    printf("arg size: %d", sizeof(arg));
}

int main()
{
    int arr[16];
    printf("arr size: %d\r\n", sizeof(arr));
    func(arr);
}