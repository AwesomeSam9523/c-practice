/*
Program to add and subtract 2 integers using user defined function
1.7, Page 20
- 20 August'2023
*/

#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);

main()
{
    int a = 20;
    int b = 10;

    printf("%2d + %2d = %2d\n", a, b, sum(a, b));
    printf("%2d - %2d = %2d\n", a, b, sub(a, b));
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}
