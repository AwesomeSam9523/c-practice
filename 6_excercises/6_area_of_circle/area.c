/*
Calculates the area of a circle, radius is already given
1.6, Page 20
- 20 August'2023
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415
#define RADIUS 10

main()
{
    float area = PI * pow(RADIUS, 2);
    printf("Area: %.3f\n", area);
}