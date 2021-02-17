#ifndef C_REPO_EXERCISES7_11_H
#define C_REPO_EXERCISES7_11_H

#define MAXMSG 2

struct Message            // buffer for command
{
    unsigned char data[7];  // number of possible
    unsigned char len;      // number of positions in use
};

void exercise7(struct Message message[MAXMSG]);
void exercise8(struct Message message[MAXMSG], int locoAddr, int data1);
void exercise9(struct Message message[MAXMSG]);

#endif //C_REPO_EXERCISES7_11_H
