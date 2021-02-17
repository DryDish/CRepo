#include <stdio.h>
#include "exercises7-11.h"
#include "../decoration/decoration.h"

void exercise8(struct Message message[MAXMSG], int locoAddr, int data1)
{
    separatorStart("Eight");

    int oldLocoAddr = message[1].data[0];
    int oldData1 = message[1].data[1];

    printf("We are gonna pretend that data1 is the bit for lights\n");
    printf("128 will represent off, 129 will represent on.\n");
    printf("locoAddr1 will represent the train number.\n\n");

    printf("locoAddr was : %d, data1 is: %d\n",oldLocoAddr, oldData1);

    message[1].data[0]= locoAddr;
    message[1].data[1]= data1;

    int newLocoAddr = message[1].data[0];
    int newData1 = message[1].data[1];

    printf("locoAddr now is: %d, data1 is: %d\n",newLocoAddr, newData1);

    separatorEnd("Eight");
}