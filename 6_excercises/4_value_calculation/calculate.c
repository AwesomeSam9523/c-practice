/*
Given 3 values a, b and c, calculate x where x = a / (b - c)
1.4, Page 20
- 20 August'2023
*/

#include <stdio.h>

main()
{
    int a = 300;
    int b = 70;
    int c = 70;

    int x = a / (b - c);
    printf("x = %d\n", x);  // Program stalls for a few seconds and gives no output?
}