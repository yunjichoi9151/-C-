// 난생처음 C언어 프로그래밍
// Chapter 13

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE* fsrc = fopen("C:\\Windows\\win.ini", "rb");

    if(fsrc)
    {
        FILE* fdest = fopen("D:\\win.ini", "wb");

        if(fdest)
        {
            char buf[32];
            while(1)
            {
                int r = fread(buf, 1, sizeof(buf), fsrc);
                if(r)
                {
                    fwirte(buf, 1, r, fdest);
                }
                else
                {
                    break;
                }
            }

            fclose(fdest);
        }
        else
            printf("Wirte Error: %d, %s", errno, strerror(errno));
        
        fclose(fsrc);
    }
    else
        printf("Read Error: %d, %s", errno, strerror(errno));
}