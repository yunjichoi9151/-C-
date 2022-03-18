// 난생처음 C언어 프로그래밍
// Chapter 11(Section 03)

#include <stdio.h>
#include <malloc.h>

int main()
{
    int* p = malloc(4);
    *p = 1;
    printf("%d", *p);
    free(p);
}