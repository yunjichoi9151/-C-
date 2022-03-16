// 난생처음 C언어 프로그래밍
// Chapter 10(Section 04)

void VariableAddress(void* p1, void* p2)
{
    printf("%p, %p, %d", p1, p2, (char*)p1 - (char*)p2);
}