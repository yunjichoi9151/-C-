// 난생처음 C언어 프로그래밍
// Chapter 14(Section 02)

#include <stdio.h>
#include <string.h>

int main()
{
    char* find = strstr("난생처음 C 프로그래밍", "C");
    printf("%s", find);
}