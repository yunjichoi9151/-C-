// 난생처음 C언어 프로그래밍
// Chapter 13(Section 03)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE* f = fopen("D:\\TestFile.txt", "wb+");

    char outstr[] = "난생처음 C 프로그래밍";
    char instr[128] = { 0 };

    if(f)
    {
        fwirte(outstr, 1, sizeof(outstr) - 1, f);

        fseek(f, 0, SEEK_SET);
        fgets(instr, sizeof(instr), f);
        printf("read: %s", instr);

        fclose(f);
    }
    else
        printf("Error: %d, %s", errno, strerror(errno));
}