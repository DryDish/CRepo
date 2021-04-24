#include "readFromStruct.h"
#include <stdio.h>
#include "struct.h"

void readStructData(struct Instruction instruction)
{
    char preamble1 = instruction.preamble[0];
    char preamble2 = instruction.preamble[1];
    int engineNumber = instruction.engineNumber;
    int command = instruction.command;
    int checksum = instruction.checksum;

    printf("The preamble is : 0x%X, engineNumber is: %d, command is: %d"", checksum is: 0x%X\n",(preamble1 + preamble2) +1, engineNumber, command, checksum);
}