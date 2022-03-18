// 난생처음 C언어 프로그래밍
// Chapter 11(Section 01)

int mystrlen(const char* str)
{
    for(int i = 0; ; i++)
        if(str[i] == '\0')
            return i;
}