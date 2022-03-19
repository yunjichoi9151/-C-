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
    CROPS c1 = Corn;
    CROPS c2;
    c2 = Wheat;
}