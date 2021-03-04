/* rain.c  -- finds yearly totals, yearly average, and monthly
 average for several years of rainfall data */
#include <stdio.h>
#define MONTHS 12    // number of months in a year
#define YEARS   5    // number of years of data
#include "exercise24.h"
#include <decoration/decoration.h>

int exercise24(void)
{
    separatorStart("24");
    // initializing rainfall data for 2010 - 2014
    float rain[YEARS][MONTHS] =
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6}, // NOLINT(cppcoreguidelines-narrowing-conversions)
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3}, // NOLINT(cppcoreguidelines-narrowing-conversions)
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4}, // NOLINT(cppcoreguidelines-narrowing-conversions)
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2}, // NOLINT(cppcoreguidelines-narrowing-conversions)
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}  // NOLINT(cppcoreguidelines-narrowing-conversions)
    };

    // TRY to print the years:
    float *yearsPtr = NULL;
    float *monthsPtr = NULL;
    //yearsPtr = &rain;

    /*
     * yearsPtr = year column
     * *yearsPtr = monthInformation of yearsPtr
     */
    yearsPtr = *rain;
    monthsPtr = yearsPtr;

    int year, month;
    float subtotal, total;
    printf(" YEAR    RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (subtotal = 0, month = 0; month < MONTHS; month++, monthsPtr++)
        {
            subtotal += *monthsPtr;
        }
        printf("%5d %15.1f\n", 2010 + year, subtotal);
        total += subtotal;
    }

    printf("\nThe yearly average is %.1f inches.\n\n",
           total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");

    yearsPtr = *rain;
    monthsPtr = *rain;
    for (month = 0; month < MONTHS; month++, monthsPtr++)
    {             // for each month, sum rainfall over years
        yearsPtr = monthsPtr;
        for (year = 0, subtotal =0; year < YEARS; year++, yearsPtr+=MONTHS)
        {
            subtotal += *yearsPtr;
        }

        printf("%4.1f ", subtotal / YEARS);
    }
    printf("\n");

    separatorEnd("24");
    return 0;
}


