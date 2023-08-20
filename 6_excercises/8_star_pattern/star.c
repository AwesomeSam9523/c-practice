/*
Program to print star pattern when rows are given
1.9, Page 20
- 20 August'2023
*/

#include <stdio.h>

main()
{
    int rows = 5;
    int row = 1;

    while (row <= rows) {
        int i = 0;
        while (i < row) {
            printf("*");
            i++;
        }
        printf("\n");
        row++;
    }
}
