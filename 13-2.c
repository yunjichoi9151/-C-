// 난생처음 C언어 프로그래밍
// Chapter 13(Section 02)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

FILE* fileopen(const char* filename)
{
    FILE* f = fopen(filename, "r+");
    if(!f && errno == ENOENT)
    {
        f = fopen(filename, "w+");
    }

    return f;
}

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