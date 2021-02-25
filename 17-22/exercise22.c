#include <stdio.h>
#include "exercise22.h"
#include "../decoration/decoration.h"

void pointerChanger(int *pointer,int size, int *arrPtr[]);
//void pointerChanger(int *a, int *b);

/*
 * Take the array of pointers from Assignment 21 and make a new pointer to point to
 * any of the 10 pointers in the array.
 * Make this pointer circular. That is, if you add 1 to the 10 th array reference,
 * the result must be the 1 st array.
 * Make a check printout, both of this pointer and the pointer it points to.
 */



int exercise22(void)
{
    separatorStart("22");

    int *arrayOfPointers[10];
    int *ptrSecondPointer = NULL;
    // region start | HIDEOUS
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
    // region end | HIDEOUS

    arrayOfDimensions[1][0]= 10;
    arrayOfDimensions[1][1]= 20;
    arrayOfDimensions[3][0]= 100;
    arrayOfDimensions[3][1]= 200;

    ptrSecondPointer = arrayOfPointers[1];
    int *ptrThirdPointer = arrayOfPointers[3];
    int *j = ptrSecondPointer;
    for (int i = 0; i < 2; i++,j++)
    {
        printf("array of pointers [1][%d]: %d\n",i, arrayOfPointers[1][i]);
        printf("secondPointer secondPointer[%d]: %d\n\n",i, *j);
    }
    printf("----- pointer = %p\n", &ptrSecondPointer[0]);
    int size = 13;
    pointerChanger(ptrSecondPointer, size, arrayOfPointers);
    //pointerChanger(ptrSecondPointer, ptrThirdPointer);
    printf("-----------------------------------------------------------------------------------\n");

    printf("----- pointer = %p\n", &ptrSecondPointer[0]);
    int *k = ptrSecondPointer;
    int *l = ptrThirdPointer;
    for (int i = 0; i < 2; i++,l++, k++)
    {
        printf("%d\n",size%5);
        printf("ptr3: array of pointers [%d][%d]: %d\n",size%5, i, *l);
        printf("index: array of pointers [%d][%d]: %d\n",size%5 ,i, arrayOfPointers[size%2][i]);
        printf("ptr2: secondPointer secondPointer[%d]: %d\n\n",i, *k);
    }

    separatorEnd("22");
    return 0;
}

void pointerChanger(int *pointer, int size, int *arrPtr[])
{
    printf("\n array pointer = %p pointer: %p, array data = %d pointer data: %d\n", &arrPtr[1][0], &pointer[0], arrPtr[1][0], *pointer);
    int choice = size % 10;
    //pointer = NULL;
    *pointer = arrPtr[choice][0];
    printf("\n array pointer = %p pointer: %p, array data = %d pointer data: %d\n", &arrPtr[choice][0], &pointer[0], arrPtr[choice][0], *pointer);
}
/*
void pointerChanger(int *pointerA, int *pointerB)
{

    printf("A: %p B: %p\n", &pointerA, &pointerB);
    int *temp = pointerB;

    pointerA = temp;
    printf("A: %p B: %p\n", &pointerA, &pointerB);

}
**/