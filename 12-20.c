// 난생처음 C언어 프로그래밍
// Chapter 12(Section 06)

#include <stdio.h>

typedef enum
{
    Rice,
    Wheat,
    Corn
} CROPS;

int main()
{
    CROPS c = Corn;

    if(c == Rice)
        printf("Rice\r\n");
    
    if(c > Wheat)
        printf("Corn\r\n");
    
    switch(c)
    {
    case Rice:
        printf("Rice\r\n");
    case Wheat:
        printf("Wheat\r\n");
    case Corn:
        printf("Corn\r\n");
    }
}