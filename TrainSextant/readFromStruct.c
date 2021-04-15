#include "readFromStruct.h"
#include <stdio.h>
#include "struct.h"
#define MAXMSG 4
// Make a C program which can print out the content of a struct as mentioned above.
// This is going to be used for test purposes.

void readStructData(struct Instruction instruction[MAXMSG])
{
    // Preamble
    instruction[1].data[0] = 0XFF;
    // Engine Address
    instruction[1].data[1] = 255;
    // Command
    instruction[1].data[2] = 3;
    // Checksum
    instruction[1].data[2] = instruction[1].data[1]^instruction[1].data[2];

    int preamble = instruction[1].data[0];
    int engineAddress = instruction[1].data[1];
    int command = instruction[1].data[2];
    int checksum = instruction[1].data[3];

    printf("preamble is: 0x%X, engineAddress is: %d, command is: %d"", checksum is: 0x%X\n"
           ,preamble, engineAddress, command, checksum);
}