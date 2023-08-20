/*
Program to compute the perimeter and area of a cicle with center and point on it given
1.14, Page 21
- 20 August'2023
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415

float distance(int x1, int y1, int x2, int y2);

main()
{
    int x1 = 0, y1 = 0;
    int x2 = 4, y2 = 5;

    float radius = distance(x1, y1, x2, y2);
    
    float perimeter = 2 * PI * radius;
    float area = PI * pow(radius, 2);

    printf("Perimeter: %.2f\nArea: %.2f\n", perimeter, area);
}

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
