#include <stdio.h>
#include <stdlib.h>

#include "exercises1-6.h"

// int dage[] ={31,28,31,30,31,30,31,31,30,31,30,31}
// Make a program with a ”for loop” to make the printout.
// Month nr. 1 contains 31 days
// Month nr. 2 contains 28 days and so on.


void exercise4(void){

    printf("--------------------Exercise-four--------------------\n\n");

    int days[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 0; i < 11; i++)
    {
        char suffix[9] = "and so on";
        if (i==0)
            printf("Month nr. %d contains %d days\n", i+1, days[i] );
        else
            printf("Month nr. %d contains %d days %s\n", i+1, days[i], suffix );
    }

    printf("\n------------------End-Exercise-four------------------\n\n\n");
}
void exercise4a(void){

    printf("--------------------Exercise-four-a-------------------\n\n");

    int days[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int i = 0;
    while(i < 12)
    {
        char suffix[9] = "and so on";
        if (i==0)
            printf("Month nr. %d contains %d days\n", i+1, days[i] );
        else
            printf("Month nr. %d contains %d days %s\n", i+1, days[i], suffix );
        i++;
    }

    printf("\n------------------End-Exercise-four-a-----------------\n\n\n");
}
void exercise4b(void){

    printf("--------------------Exercise-four-b-------------------\n\n");

    int days[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int i = 0;
    do
    {
        char suffix[9] = "and so on";
        if (i==0)
            printf("Month nr. %d contains %d days\n", i+1, days[i] );
        else
            printf("Month nr. %d contains %d days %s\n", i+1, days[i], suffix );
        i++;
    } while(i < 12);

    printf("\n------------------End-Exercise-four-b-----------------\n\n\n");
}