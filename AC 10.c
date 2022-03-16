// 난생처음 C언어 프로그래밍
// Chapter 10

void* mymemset(void* dest, int c, size_t count)
{
    char* p = dest;
    for(int i = 0; i < count; i++)
        p[i] = c;
    
    return p;
}