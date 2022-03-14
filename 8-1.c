// 난생처음 C언어 프로그래밍
// Chapter 08(Section 01)

#include <stdio.h>

int Sum(int from, int to)
{
    int sum = 0;
    for(int i = from; i <= to; i++)
        sum += i;
    
    return sum;
    printf("Complete!");
}

int main()
{
    int result = Sum(1, 100);
    printf("Sum: %d", result);
}