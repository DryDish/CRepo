#include <stdio.h>
#include <stdlib.h>

#include "exercises1-6.h"
#include "../decoration/decoration.h"

// There are other input methods, try them.
// gets()
// getchar()
// char character;
// char name[20];
// gets(name);
// character = getchar();

void exercise3(void){
    separatorStart("Three");

    printf(" --- Trying different input methods ---\n\n");
    char character;
    char name[20];
    printf("Please type a name no more than 20 chars long and press enter : \n");
    //do {
    //    gets(name);
    //} while (name[0] != '\0');
    gets(name);
    printf("Please type any char and press enter : \n");
    character = getchar();

    printf("Name : %s\nChar : %c", name, character);
    getchar();

    separatorEnd("Three");
}
