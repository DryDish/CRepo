#include <stdio.h>
#include "exercise21.h"
#include "../decoration/decoration.h"

/*
 * Now we want to represent the array in Assignment 20 as 10 1-dimensional arrays.
 * I.e. we need 10 different pointers, one for each row.
 * Construct the code where the 10 different pointers are stored in an array of pointers.
 * Make some check printouts
 */

int exercise21(void)
{
    separatorStart("21");

    int arrayOfDimensions[10][10];

    int *arrayOfDimensionsPtr0 = NULL;
    int *arrayOfDimensionsPtr1 = NULL;
    int *arrayOfDimensionsPtr2 = NULL;
    int *arrayOfDimensionsPtr3 = NULL;
    int *arrayOfDimensionsPtr4 = NULL;
    int *arrayOfDimensionsPtr5 = NULL;
    int *arrayOfDimensionsPtr6 = NULL;
    int *arrayOfDimensionsPtr7 = NULL;
    int *arrayOfDimensionsPtr8 = NULL;
    int *arrayOfDimensionsPtr9 = NULL;

    arrayOfDimensionsPtr0 = arrayOfDimensions[0];
    arrayOfDimensionsPtr1 = arrayOfDimensions[1];
    arrayOfDimensionsPtr2 = arrayOfDimensions[2];
    arrayOfDimensionsPtr3 = arrayOfDimensions[3];
    arrayOfDimensionsPtr4 = arrayOfDimensions[4];
    arrayOfDimensionsPtr5 = arrayOfDimensions[5];
    arrayOfDimensionsPtr6 = arrayOfDimensions[6];
    arrayOfDimensionsPtr7 = arrayOfDimensions[7];
    arrayOfDimensionsPtr8 = arrayOfDimensions[8];
    arrayOfDimensionsPtr9 = arrayOfDimensions[9];

    int *arrayOfPointers[10];
    arrayOfPointers[0] = arrayOfDimensionsPtr0;
    arrayOfPointers[1] = arrayOfDimensionsPtr1;
    arrayOfPointers[2] = arrayOfDimensionsPtr2;
    arrayOfPointers[3] = arrayOfDimensionsPtr3;
    arrayOfPointers[4] = arrayOfDimensionsPtr4;
    arrayOfPointers[5] = arrayOfDimensionsPtr5;
    arrayOfPointers[6] = arrayOfDimensionsPtr6;
    arrayOfPointers[7] = arrayOfDimensionsPtr7;
    arrayOfPointers[8] = arrayOfDimensionsPtr8;
    arrayOfPointers[9] = arrayOfDimensionsPtr9;

    for (int i = 0; i < 10; i++)
    {
        arrayOfDimensions[i][0] = i;
        arrayOfDimensions[i][1] = i+4;
    }

    printf("Checking the contents of the array: \n[ ");
    for (int i = 0; i < 10; i++)
    {
        printf("(%d, %d) ", arrayOfPointers[i][0], arrayOfPointers[i][1]);
    }
    printf("]\n");

    separatorEnd("21");
    return 0;
}