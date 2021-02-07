#include <stdio.h>
#include <stdlib.h>

#include "exercises1-6.h" //who even wanted this anyhow?

void exercise2(void){

    printf("---------------------Exercise-Two--------------------\n\n");

    int number;
    char character;
    char string[20];
    printf("Please type a name followed by a space, a char followed by\n");
    printf("a space and finally any number followed by the enter key\n");
    scanf("%20s %c %d", string, &character, &number);
    getchar(); //clear the remaining '\0'
    printf("String: %s Char: %c Number: %d", string,character,number);

    printf("\n------------------End-Exercise-Two-------------------\n\n\n");
}
