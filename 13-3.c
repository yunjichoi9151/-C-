// 난생처음 C언어 프로그래밍
// Chapter 13(Section 03)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE* f = fopen("D:\\TestFile.txt", "wb");

    if(f)
    {
        fseek(f, 0, SEEK_END);
        fseek(f, 0, SEEK_SET);
        fseek(f, 30, SEEK_CUR);
        fclose(f);
    }
    else
        printf("Error: %d, %s", errno, strerror(errno));
}