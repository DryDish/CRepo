#include <stdio.h>
#include <decoration/decoration.h>
#include "exercise23.h"

int printValue(int var, int *ptr, int **pPtr);


int exercise23(void)
{
    separatorStart("23");

    int    var1,  var2 ;
    int   *ptr1, *ptr2 ;
    int  **pPtr;       // A Pointer to a Pointer

    var1 = 1000;
    var2 = 2000;

    /* take the address of var */
    ptr1 = &var1;
    ptr2 = &var2;

    /* take the address of ptr1 using address of operator & */
    pPtr = &ptr1;

    /* take the value using pptr */
    printValue(var1, ptr1, pPtr);

    /* change to the address of ptr2 using address of operator & */
    pPtr = &ptr2;

    /* take the value using pPtr */
    printValue(var2, ptr2, pPtr);
    separatorEnd("23");
    return 0;
}

int printValue(int var, int *ptr, int **pPtr)
{
    printf("Value of var2 = %d\n", var );
    printf("Value available at  *ptr2 = %d\n",  *ptr );
    printf("Value available at **pPtr = %d\n", **pPtr);
    return 0;
}