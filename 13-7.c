// 난생처음 C언어 프로그래밍
// Chapter 13(Section 03)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE* f = fopen("D:\\TestFile.txt", "wb");

    char str[] = "난생처음 C 프로그래밍";

    if(f)
    {
        fwirte(str, 1, sizeof(str) - 1, f);
        fclose(f);
    }
    else
        printf("Error: %d, %s", errno, strerror(errno));
}