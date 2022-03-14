// 난생처음 C언어 프로그래밍
// Chapter 09(Section 01)

#include <stdio.h>

int g = 1;
int garr[1] = { 1 };

void func()
{
    g++;
    garr[0]++;
}

int main()
{
    printf("Before: %d, %d\r\n", g, garr[0]);
    func();
    printf("After: %d, %d", g, garr[0]);
}