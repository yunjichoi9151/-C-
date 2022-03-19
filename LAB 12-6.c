// 난생처음 C언어 프로그래밍
// Chapter 12(Section 06)

#include <stdio.h>

typedef enum
{
    HAMBURGER,
    PIZZA,
    CHICKEN,
    SPAGHETTI,
} Menu;

void Order(Menu m)
{
    switch(m)
    {
    case HAMBURGER:
        printf("Hamburger"); break;
    case PIZZA:
        printf("Pizza"); break;
    case CHICKEN:
        printf("Chicken"); break;
    case SPAGHETTI:
        printf("Spaghetti"); break;
    }
}

int main()
{
    Order(HAMBURGER);
}