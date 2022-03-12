// 난생처음 C언어 프로그래밍
// Chapter 07(Section 01)

#include <stdio.h>

int main()
{
    char alphabets[26];
    for(int i = 0; i < 26; i++)
    {
        alphabets[i] = 'A' + i;
    }
}