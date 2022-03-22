// 난생처음 C언어 프로그래밍
// Chapter 14(Section 03)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    char lotto[45] = {0};

    srand(time(NULL));
    while(1)
    {
        int num = rand() % 45 + 1;

        if(!lotto[num - 1])
        {
            lotto[num - 1] = 1;
            count++;

            if(count == 6)
                break;
        }
    }

    for(int i = 0; i < 45; i++)
        if(lotto[i])
            printf("%d", i + 1);
}