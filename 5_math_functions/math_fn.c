/*
Using math library
- 20 Aug'2023
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415
#define MAX_ANGLE 360
#define STEP 30

main()
{
    int angle = 0;
    printf("  Angle      cos(Angle)      sin(Angle)      tan(Angle)\n");
    while (angle <= MAX_ANGLE)
    {
        float degree = (PI/180) * angle;
        printf("%d %14.4f %15.4f %15.4f\n", angle, sin(degree), cos(degree), tan(degree));
        // Note: tan(90) and tan(270) should be not defined, but it gives 21584.8906 and 7207.3271 for some reason
        angle += STEP;
    }
}
