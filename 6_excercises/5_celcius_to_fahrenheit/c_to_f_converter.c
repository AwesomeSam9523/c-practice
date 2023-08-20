/*
Converts celcius to fahrenheit using formula F = 9C/5 + 32
1.5, Page 20
- 20 August'2023
*/

#include <stdio.h>

#define CELCIUS_TEMP 30

main()
{
    float fahreinheit = (9/5)*CELCIUS_TEMP + 32;
    printf("%dC to F is %.2f\n", CELCIUS_TEMP, fahreinheit);
}
