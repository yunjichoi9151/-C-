// 난생처음 C언어 프로그래밍
// Chapter 12(Section 03)

#include <stdio.h>

typedef struct
{
    int m;
} SType;

void func(SType arg)
{
    arg.m = 2;
    printf("arg.m: %d\r\n", arg.m);
}

int main()
{
    SType s;
    s.m = 1;
    func(s);
    printf("s.m: %d", s.m);
}