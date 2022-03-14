// 난생처음 C언어 프로그래밍
// Chapter 08(Section 01)

void funcB();

void funcA()
{
    funcB();
}

void funcB()
{
    funcA();
}

int main()
{
    funcA();
}