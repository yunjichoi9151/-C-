// 난생처음 C언어 프로그래밍
// Chapter 13(Section 02)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE* f = fopen("C:\\NotExist.txt", "rb");

    if(f)
    {
        // ...파일 작업...

        fclose(f);
    }
    else
        printf("Error: %d, %s", errno, strerror(errno));
}