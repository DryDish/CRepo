#include <stdio.h>
#include <stdlib.h>

#include "exercises1-6.h"
#include "../decoration/decoration.h"

// Make a program where you input a character;
// If the character is an “a” or “A” the program will printout “Apple”;
// If the character is an “b” or “B” the program will printout “Banana”;
// If the character is an “c” or “C” the program will printout “Cherry”;
// If the character is an “d” or “D” the program will printout “Date”;
// If the character is an “e” or “E” the program will printout “Elderberry”;
// Otherwise the program will answer “I don’t know any fruit with a ” and the entered letter.
// Use if-else.


void exercise5(void){
    separatorStart("Five");

    printf("Please type a single character from a to e.\n Confirm your input with enter.\n");
    char letter;
    letter = getchar();
    printf("You have entered = %c\n", letter);

    if (letter == 65   || letter == 97)
        printf("Apple!\n");
    else if (letter == 66 || letter == 98)
        printf("Banana!");
    else if (letter == 67 || letter == 99)
        printf("Coconut!");
    else if (letter == 68 || letter == 100)
        printf("Date!");
    else if (letter == 69 || letter == 101)
        printf("Elderberry!");
    else {
        printf("Thought we could be sneaky did we?\n");
        printf("I don't know any fruits that start with %c\n", letter);
    }
    getchar();
    separatorEnd("Five");
}

void exercise5a(void){

    separatorStart("Five-a");

    printf("Please type a single character from a to e.\n Confirm your input with enter.\n");
    char letter;
    letter = getchar();
    printf("You have entered = %c\n", letter);

    switch (letter) {
        case 'a':
            printf("Apple!\n");
            break;
        case 'A':
            printf("Apple!\n");
            break;
        case 'b':
            printf("Banana!\n");
            break;
        case 'B':
            printf("Banana!\n");
            break;
        case 'c':
            printf("Coconut!\n");
            break;
        case 'C':
            printf("Coconut!\n");
            break;
        case 'd':
            printf("Date!\n");
            break;
        case 'D':
            printf("Date!\n");
            break;
        case 'e':
            printf("Elderberry!\n");
            break;
        case 'E':
            printf("Elderberry!\n");
            break;
        default:
            printf("Thought we could be sneaky did we?\n");
            printf("I don't know any fruits that start with %c\n", letter);
            break;
    }

    separatorEnd("Five-a");
}
