// 난생처음 C언어 프로그래밍
// Chapter 10(Section 04)

#include <stdio.h>

int main()
{
    int i = 0;
    void* p = &i;

    //*p = 1;
    *(int*)p = 1;
}