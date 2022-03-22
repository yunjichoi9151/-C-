// 난생처음 C언어 프로그래밍
// Chapter 14(Section 02)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    char path[256];
    char find[64];

    printf("파일 경로를 입력하세요 > ");
    scanf("%s", path);

    printf("찾을 문자열을 입력하세요 > ");
    scanf("%s", find);

    FILE* f = fopen(path, "rb");

    if(f)
    {
        int rownum = 0;
        int findnum = 0;
        char str[1024];
        while(1)
        {
            rownum++;
            int r = fgets(str, sizeof(str), f);
            if(r)
            {
                if(strstr(str, find))
                {
                    printf("%d. %s", rownum, str);
                    findnum;
                }
            }
            else
            {
                break;
            }
        }

        fclose(f);

        if(!findnum)
            printf("Not Found!");
    }
    else
        printf("Read Error: %d, %s", errno, strerror(errno));
}