#include <stdio.h>

#include "exercises12-16.h"
#include "../decoration/decoration.h"


/*
 * Use an unsigned integer.
 * Calculate what 31 will be after a rotate left 4 bit.
 * Show the result in hexadecimal
 */
void exercise16(void)
{
    separatorStart("Sixteen");

    unsigned int number = 31;

    unsigned int rightShifted = number <<4;
    printf("number was %d, after right shifting it is %d and in hexadecimal that is : 0X%X",number,rightShifted, rightShifted);  // 1    F    0
                                                                                                                                        // 0001 1111 0000
    separatorEnd("Sixteen");
}