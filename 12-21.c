// 난생처음 C언어 프로그래밍
// Chapter 12(Section 06)

#include <stdio.h>

typedef enum
{
    Rice,
    Wheat = 7,
    Corn
} CROPS;

int main()
{
    printf("Rice: %d, Wheat: %d, Corn: %d", Rice, Wheat, Corn);
}