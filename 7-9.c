// 난생처음 C언어 프로그래밍
// Chapter 07(Section 02)

#include <stdio.h>

int main()
{
    char s1[] = {'K', 'o', 'r', 'e', 'a' };
    char s2[] = {'K', 'o', 'r', 'e', 'a', '\0' }; 

    printf("%s\r\n%s", s1, s2);
}