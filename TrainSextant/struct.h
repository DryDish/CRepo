#ifndef C_REPO_STRUCT_H
#define C_REPO_STRUCT_H

#define MAXMSG 4

struct Instruction            // buffer for command
{
    unsigned char data[7];  // number of possible
    unsigned char len;      // number of positions in use
};

#endif //C_REPO_STRUCT_H
