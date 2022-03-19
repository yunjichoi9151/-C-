// 난생처음 C언어 프로그래밍
// Chapter 12(Section 06)

#include <stdio.h>

enum CROPS
{
    Rice,
    Wheat,
    Corn
};

int main()
{
    enum CROPS c1 = Rice;
    int c2 = Wheat;

    printf("c1: %d, c2: %d", c1, c2);
}