#include <stdio.h>

#include "exercises7-11.h"
#include "../decoration/decoration.h"

// Make a C program which can print out the content of a struct as mentioned above.
// This is going to be used for test purposes.
#define MAXMSG 2


void exercise7(struct Message message[MAXMSG])
{
    separatorStart("Seven");
    message[1].data[0] = 1;
    message[1].data[1] = 2;
    message[1].data[2] = 3;

    int locoAddr1 = message[1].data[0];
    int data1 = message[1].data[1];
    int xdata1 = message[1].data[2];

    printf("locoAddr1 is: %d, data1 is: %d, xdata1 is: %d\n",locoAddr1, data1, xdata1);

    separatorEnd("Seven");
}