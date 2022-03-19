// 난생처음 C언어 프로그래밍
// Chapter 12(Section 04)

#include <stdio.h>

typedef struct
{
    char c;
    int i;
} SType;

int main()
{
    int size1 = sizeof(char) + sizeof(int);
    int size2 = sizeof(SType);

    printf("size1: %d, size2: %d", size1, size2);
}