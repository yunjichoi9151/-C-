// 난생처음 C언어 프로그래밍
// Chapter 06(Section 05)

#include <stdio.h>

int main()
{
    for(int i = 2; i < 10; i++)
    {
        int j = 1;
        while(1)
        {
            printf("%d + %d = %d\r\n", i, j, i * j);
            j++;
            if(j > 9)
                break;
        }
            
        printf("\r\n");
    }
}