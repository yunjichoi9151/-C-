// 난생처음 C언어 프로그래밍
// Chapter 09(Section 04)

#include <stdio.h>

void func()
{
    static int s = 0;
    s++;
    
    {
        static int s = 1;
        s++;
        printf("%d ", s);
    }

    printf("%d\r\n", s);
}

int main()
{
    func();
    func();
}