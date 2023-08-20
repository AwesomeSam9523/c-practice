/*
Find area of triangle when length of 3 sides are given
1.11, Page 21
- 20 August'2023
*/

#include <stdio.h>
#include <math.h>

main()
{
    int a = 10;
    int b = 12;
    int c = 14;

    float s = (a + b + c)/2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area: %.2f sq. units\n", area);
}
