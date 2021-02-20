#include <stdio.h>
#include "exercise20.h"
#include "../decoration/decoration.h"

void printArrayWithPointers(int *number);

int exercise20(int arrayPassed[100])
{
    separatorStart("20");

             // create an array size 100
    int *arrayPtr = NULL;       // create a null pointer
    arrayPtr = arrayPassed;   // assign the pointer to the array's reference
    printf("array numbers printed with pointers");
    for (int i=0; i < 100; i++, arrayPtr++)
    {
        *arrayPtr = (i+1);
        if (i%20 == 0)
        {
            printf("\n");
        }
        printArrayWithPointers(arrayPtr);
    }
    arrayPtr = NULL;
    printf("\n");

    separatorEnd("20");
    return 0;
}

void printArrayWithPointers(int *number)
{
    printf("%-3d", *number);
}