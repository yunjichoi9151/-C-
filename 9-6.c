// 난생처음 C언어 프로그래밍
// Chapter 09(Section 02)

void func(int arg)
{
    arg = 1;
    int a = 2;

    {
        int b = 3;
    }

    b = 4;
}

int main()
{
    func(0);
}