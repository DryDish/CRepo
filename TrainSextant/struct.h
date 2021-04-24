#ifndef C_REPO_STRUCT_H
#define C_REPO_STRUCT_H

struct Instruction
{
    unsigned char preamble[2];
    unsigned char blank1;
    unsigned char engineNumber;
    unsigned char blank2;
    unsigned char command;
    unsigned char blank3;
    unsigned char checksum;
    unsigned char endChar;
};

#endif //C_REPO_STRUCT_H
