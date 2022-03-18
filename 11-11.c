// 난생처음 C언어 프로그래밍
// Chapter 11(Section 03)

#include <stdio.h>
#include <malloc.h>

int main()
{
    int* p1 = malloc(sizeof(int));
    int* p2 = calloc(1, sizeof(int));

    printf("%d, %d", *p1, *p2);

    free(p1);
    free(p2);
}