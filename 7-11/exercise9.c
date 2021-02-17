#include <stdio.h>

#include "exercises7-11.h"
#include "../decoration/decoration.h"

/**
 * Declare a Structure which contains the information of a locomotive, i.e.:
 *
 * Id
 * Name
 * Speed,
 * Direction
 * Light on/off
 *
 * Initialize it in at least 2 representations of 2 different locomotives.
**/

struct locomotive
{
    int id;             // 0 - 200
    char name[20];
    int speed;          // -100 - 100
    char direction[2];  // compass direction
    int light;
};
void exercise9(struct Message message[MAXMSG])
{

}