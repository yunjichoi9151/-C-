// 난생처음 C언어 프로그래밍
// Chapter 13(Section 04)

#include <stdio.h>

#define LINE_PRINT(x, y) printf("%d\r\n", (x)); printf("%d", (y));

int main()
{
    if(0)
        LINE_PRINT(1, 2);
}