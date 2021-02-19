#include <stdio.h>
#include "exercise17.h"
#include "../decoration/decoration.h"

/*
 * Make a program with two variables of the type int x=10 and y=20.
 * We would like to let the program printout the value in the variable,
 * as well as the address.
 */

int exercise17()
{
    separatorStart("17");

    int x = 10;         // initialize the int variable
    int y = 20;
    int *ptr_x = NULL;  // initialize the pointer to null
    int *ptr_y = NULL;

    ptr_x = &x;         // assign x's reference to the pointer
    ptr_y = &y;

    printf("int x = %d, int x pointer = %p, int x reference = %p\n", x, ptr_x, &x);
    printf("int y = %d, int y pointer = %p, int y reference = %p\n", y, ptr_y, &y);

    separatorEnd("17");
    return 0;
}