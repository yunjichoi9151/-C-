// 난생처음 C언어 프로그래밍
// Chapter 13(Section 03)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE* f = fopen("C:\\Windows\\win.ini", "rb");

    if(f)
    {
        char str[128];
        while(1)
        {
            int r = fgets(str, sizeof(str), f);
            if(r)
            {
                printf("%s", str);
            }
            else
            {
                break;
            }
        }

        fclose(f);
    }
    else
        printf("Read Error: %d, %s", errno, strerror(errno));
}