// 난생처음 C언어 프로그래밍
// Chapter 06

#include <stdio.h>

int main()
{
    printf("100 이하의 소수: 2, ");

    for(int i = 3; i <= 100; i += 2)
    {
        int flag = 1;
        for(int j = 3; j < i; j += 2)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("%d, ", i);
    }
}