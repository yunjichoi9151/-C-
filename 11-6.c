// 난생처음 C언어 프로그래밍
// Chapter 11(Section 02)

#include <stdio.h>

void func(int arg[16])
{
    arg[7] = 1;
    arg[8] = 2;
}

int main()
{
    int arr[8];
    func(arr);
}