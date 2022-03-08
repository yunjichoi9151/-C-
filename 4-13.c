// 난생처음 C언어 프로그래밍
// Chapter 04(Section 06)

#include <stdio.h>

int main()
{
    unsigned char uc = 0b10000000;
    printf("uc >> 7: %d\r\n", uc >> 7);

    char c = 0b10000000;
    printf("c >> 7: %d", c >> 7);
}