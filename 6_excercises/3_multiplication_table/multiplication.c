/*
Print multiplication table of a number upto 10
1.3, Page 20
- 20 August'2023
*/

#include <stdio.h>

#define NUMBER 5

main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d x %2d = %d\n", NUMBER, i, NUMBER * i);
        i++;
    }
}
