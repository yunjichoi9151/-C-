// 난생처음 C언어 프로그래밍
// Chapter 07(Section 04)

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "난생처음 C 프로그래밍";
    int slen1 = sizeof(str) / sizeof(str[0]) - 1;
    int slen2 = strlen(str);

    printf("slen1: %d\r\nstlen: %d", slen1, slen2);
}