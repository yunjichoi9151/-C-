// 난생처음 C언어 프로그래밍
// Chapter 11(Section 03)

#include <stdio.h>
#include <malloc.h>

int* GetStack()
{
    int a = 1;
    return &a;
}

int* GetHeap()
{
    int* p = malloc(sizeof(int));
    *p = 2;
    return p;
}

int main()
{
    int* p1 = GetStack();
    int* p2 = GetHeap();
    printf("%d, %d", *p1, *p2);
    free(p2);
}