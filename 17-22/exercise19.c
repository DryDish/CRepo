#include <stdio.h>
#include "exercise19.h"
#include "../decoration/decoration.h"
void swap(int *a,int *b);

/*
 * Take the program/code from Assignment 18 and change ANY index reference to an
 * array position so you use pointers instead.
 */


int exercise19()
{
    separatorStart("19");

    int i, j, n;
    int ar[] = { 7, 3, 9, 2, 11};
    printf( "Array before sort:\n\n" );
    for( i=0 ; i<5 ; i++ )
        printf( "ar[%d]=%d\n",i, ar[i] );
    n = 5;      // number of items in sort array
    int *arrPtr = NULL;
    int *arrPtrIncremented = NULL;

    for (i=0; i < 4; i++, arrPtr++)
                // ----    THIS IS FUGLY BUT IT DOES WORK, IM LOOKING FOR A BETTER SOLUTION     ----
    {
        arrPtr = ar;                // assign the arr pointer to the same as arr (the beginning of the array)
        arrPtrIncremented = ar;     // Assign the arr pointer to be incremented to the beginning array
        arrPtrIncremented++;        // Have to increment ahead of time to make it work like j[i+1] since i cant decrement it
        for ( j=0; j<4; j++, arrPtr++, arrPtrIncremented++)
        {
            if (*arrPtr > *arrPtrIncremented )      // Compare the first value with the next value in array position
            {
                swap(arrPtr, arrPtrIncremented );   // Swap if needed
            }
        }
    }
    printf( "Array after sort:\n\n" );
    for( i=0; i<5; i++ )
        printf( "ar[%d]=%d\n", i, ar[i] );

    separatorEnd("19");
    return 0;
}


void swap( int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}