// 난생처음 C언어 프로그래밍
// Chapter 12(Section 05)

typedef union
{
    char str[5];
    int hash;
} HType;

int GetHash(const char* str)
{
    HType h;
    for(int i = 0; i < 4; i++)
    {
        h.str[i] = str[i];
    }
    h.str[4] = '\0';

    return h.hash;
}

#include <stdio.h>

int main()
{
    printf("%s Hash: %d\r\n", "ABCD", GetHash("ABCD"));
    printf("%s Hash: %d", "0123", GetHash("0123"));
}
