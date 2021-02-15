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

int exercise6(int a){

    separatorStart("Six");

    int multiplied = a * a;
    printf("The number received was: %d and it will return: %d\n",a , multiplied);

    separatorEnd("Six");
    return multiplied;
}
int exercise6a(int a, int b){

    separatorStart("Six-a");

    if (a<b) {
        printf("The number received was: (%d, %d) and it will return: %d\n", a, b, a);
        separatorEnd("Six-a");
        return a;
    }
    else {
        printf("The number received was: (%d, %d) and it will return: %d\n", a, b, b);
        separatorEnd("Six-a");
        return b;
    }
}