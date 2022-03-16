// 난생처음 C언어 프로그래밍
// Chapter 10(Section 02)

#include <stdio.h>

int main()
{
    int a = 0;

    //char* p = &a;
    char* p = (char*)&a;

    *(p + 0) = 'A';
    *(p + 1) = 'B';
    *(p + 2) = 'C';
    *(p + 3) = '\0';

    printf("%s", &a);
}