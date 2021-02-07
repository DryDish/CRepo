#include <stdio.h>
#include <stdlib.h>

#include "exercises1-6.h"

// There are other input methods, try them.
// gets()
// getchar()
// char character;
// char name[20];
// gets(name);
// character = getchar();

int exercise6(int a){

    printf("--------------------Exercise-six--------------------\n\n");

    int multiplied = a * a;
    printf("The number received was: %d and it will return: %d\n",a , multiplied);

    printf("\n------------------End-Exercise-six------------------\n\n\n");
    return multiplied;
}
int exercise6a(int a, int b){

    printf("--------------------Exercise-six-a-------------------\n\n");

    if (a<b) {
        printf("The number received was: (%d, %d) and it will return: %d\n", a, b, a);
        return a;
    }
    else {
        printf("The number received was: (%d, %d) and it will return: %d\n", a, b, b);
        return b;
    }
    printf("\n------------------End-Exercise-six-a-----------------\n\n\n");
}