#include <stdio.h>
#include <stdlib.h>

#include "exercises1-6.h"

void exercise2(){

    printf("---------------------Exercise-Two--------------------\n\n");

    int number;
    char character;
    char string[20];
    scanf("%s %c %d", &string, &character, &number);

    printf("String: %s Char: %c Number: %d", string,character,number);

    printf("\n------------------End-Exercise-Two-------------------\n\n\n");
}
