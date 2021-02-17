#include <stdio.h>

#include "exercises12-16.h"
#include "../decoration/decoration.h"

/**
 * Make a C program to show all prime numbers from 1 to 100.
 */

void exercise13(void)
{
    separatorStart("Thirteen");

    int flag = 0;
    printf("prime numbers = [ 2 ");
    for (int number = 2; number < 101; number++)
    {
        if (number % 2 != 0)
        {
            flag = 0;
            for (int divisor = 2; divisor < number; divisor++)
            {

                if (number % divisor == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                printf("%d ", number);
            }
        }
    }

    printf("]\n");

    separatorEnd("Thirteen");
}