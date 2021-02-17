#include <stdio.h>
#include <string.h>
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
 * ------------------- DECLARED IN THE HEADER FILE ----------------
**/

void exercise9(struct Locomotive *train, char newDirection[2])
{
    struct Locomotive trainClone = *train;      // clone the train reference to a dummy train
    strcpy(trainClone.direction, newDirection); // change the char of direction on dummy with new directions
    *train = trainClone;                        // change the train pointer to match our dummy clone
}