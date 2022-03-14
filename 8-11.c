// 난생처음 C언어 프로그래밍
// Chapter 08(Section 01)
// 실제로는 각각 다른 파일에 존재함

// Function.c
int* func()
{
    return 0;
}

//Main.c
int main()
{
    *func();
}