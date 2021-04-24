#include <stdio.h>
#include "writeToTrain.h"
// #include "write.h"

void writeByte(unsigned char byte)
{
    printf("data sent: 0x%X, %d \n", byte, byte);
}

int writeToTrain(struct Instruction instruction)
{
    printf("writing to train...\n");

    writeByte(instruction.preamble[0]);
    writeByte(instruction.preamble[1]);
    writeByte(instruction.blank1);
    writeByte(instruction.engineNumber);
    writeByte(instruction.blank2);
    writeByte(instruction.command);
    writeByte(instruction.blank3);
    writeByte(instruction.checksum);
    writeByte(instruction.endChar);
    return 0;
}