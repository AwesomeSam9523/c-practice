/*
Making user defined functions
- 20 Aug'2023
*/

#include <stdio.h>

// we defined this so we can use it in main()
int mul(int a, int b);

main()
{
    int a, b, c;
    a = 4;
    b = 10;
    c = mul(a, b);

    printf("%d x %d = %d\n", a, b, c);
}

// we generally write user defined functions after main()
int mul(int a, int b)
{
    return a * b;
}
