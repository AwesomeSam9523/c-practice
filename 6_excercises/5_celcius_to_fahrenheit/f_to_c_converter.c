/*
Converts fahrenheit to celcius using formula C = (F - 32)*5/9
1.5, Page 20
- 20 August'2023
*/

#include <stdio.h>

#define FAHRENHEIT_TEMP 30

main()
{
    float celcius = (FAHRENHEIT_TEMP - 32) * 5/9;
    printf("%dF to C is %.2f\n", FAHRENHEIT_TEMP, celcius);
}
