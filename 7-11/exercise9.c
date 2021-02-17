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
    separatorStart("Nine");

    printf("Direction before the change: \"%s\"\n", train->direction);

    struct Locomotive trainClone = *train;      // clone the train reference to a dummy train
    strcpy(trainClone.direction, newDirection); // change the char of direction on dummy with new directions
    *train = trainClone;                        // change the train pointer to match our dummy clone

    printf("Direction after change: \"%s\"\n", train->direction);

    separatorEnd("Nine");
}

int exercise9a(struct Locomotive a, struct Locomotive b)
{
    separatorStart("Nine-A");

    printf("Comparing Locomotive a to b\n");
    if (a.id != b.id)
    {
        printf("The IDs dont match!\n");
        separatorEnd("Nine-A");
        return 1;
    }
    if (strcmp(a.name, b.name) != 0)
    {
        printf("The names dont match!\n");
        separatorEnd("Nine-A");
        return 1;
    }
    if (a.light != b.light)
    {
        printf("The light values dont match!\n");
        separatorEnd("Nine-A");
        return 1;
    }
    if (a.speed != b.speed)
    {
        printf("The speed values dont match!\n");
        separatorEnd("Nine-A");
        return 1;
    }
    if (strcmp(a.direction, b.direction) != 0)
    {
        printf("The directions dont match!\n");
        separatorEnd("Nine-A");
        return 1;
    }
    else
    {
        printf("They are equal!\n");
        separatorEnd("Nine-A");
        return 0;
    }
}