#include <stdio.h>
#include <limits.h> // to get minimums and maximums

#include "exercises12-16.h"
#include "../decoration/decoration.h"

/**
 * Make a C program that can tell you what is the largest number that can be contained in
 * a char, and an unsigned char.
**/


void exercise12(void)
{
    separatorStart("Twelve");

    printf("Signed char minimum size: %d maximum size: %d\n", SCHAR_MAX, SCHAR_MIN);
    printf("Unsigned char minimum:    0   maximum size: %d\n", UCHAR_MAX);

    separatorEnd("Twelve");
}