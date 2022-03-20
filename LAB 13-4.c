// 난생처음 C언어 프로그래밍
// Chapter 13(Section 05)

#include <stdio.h>

int main()
{
#ifdef ENG
    const char* title = "C programming for the first time";
#else
    const char* title = "난생처음 C 프로그래밍";
#endif

    printf("%s", title);
}