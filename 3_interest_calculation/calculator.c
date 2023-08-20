/*
Interest calculation
- 20 Aug'2023
*/

#include <stdio.h>

// define is a compiler directive, it doesn't end with semi colon
// pg 8, 7th edition
#define PERIOD 10
#define PRINCIPAL 5000.00
#define INRATE 0.11

main()
{
    int year = 0;
    float amount = PRINCIPAL;
    float value;

    while (year <= PERIOD)
    {
        printf("%2d %.2f\n", year, amount); // 2d = 2 places. Intead of `0` it will become ` 0`
        value = amount + INRATE * amount;
        year++;
        amount = value;
    }
}