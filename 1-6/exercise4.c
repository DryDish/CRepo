#include <stdio.h>
#include <stdlib.h>

#include "exercises1-6.h"
#include "../decoration/decoration.h"

// int dage[] ={31,28,31,30,31,30,31,31,30,31,30,31}
// Make a program with a ”for loop” to make the printout.
// Month nr. 1 contains 31 days
// Month nr. 2 contains 28 days and so on.


void exercise4(void){
    separatorStart("Four");

    printf(" --- printing with for loops ---\n\n");

    int days[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 0; i < 12; i++)
    {
        char suffix[9] = "and so on";
        if (i==0)
            printf("Month nr. %d contains %d days\n", i+1, days[i] );
        else
            printf("Month nr. %d contains %d days %s\n", i+1, days[i], suffix );
    }

    separatorEnd("Four");
}
void exercise4a(void){
    separatorStart("Four-a");

    printf(" --- printing with for while loop ---\n\n");

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

    separatorEnd("Four-a");
}
void exercise4b(void){
    separatorStart("Four-b");

    printf(" --- printing with for do while loop ---\n\n");

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

    separatorEnd("Four-b");
}