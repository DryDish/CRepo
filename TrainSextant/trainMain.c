#include <stdio.h>
#include "trainMain.h"
#include "readFromStruct.h"
#include "write.h"
#include "writeToTrain.h"

int main()
{
    struct Instruction blankInstruction =
            {
                    0x00,
                    0x00,
                    0,
                    0,
                    0,
                    0,
                    0,
                    blankInstruction.command ^ blankInstruction.engineNumber,
                    1
            };
    struct Instruction testInstruction =
            {
                    0xFF,
                    0xFF,
                    0,
                    135,
                    0,
                    132,
                    0,
                    testInstruction.command ^ testInstruction.engineNumber,
                    1
            };
    readStructData(testInstruction);
    writeToTrain(testInstruction);
    return 0;
}