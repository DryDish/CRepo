#include <stdio.h>
#include <stdlib.h>

#include "1-6/exercises1-6.h"
#include "7-11/exercises7-11.h"
#include "decoration/decoration.h"




void exerciseSet1_6()
{
    exercise1();
    exercise2();
    exercise3();
    exercise4();
    exercise4a();
    exercise4b();
    exercise5();
    exercise5a();
    exercise6(5);
    exercise6a(2, 5);
}

void exerciseSet7_11()
{
    // assigning data to the struct Message
    struct Message message[MAXMSG] =
    {
        { { 0xFF, 0, 0xFF, 0, 0, 0, 0}, 3}, // idle msg
        { { 0,    0,    0, 0, 0, 0, 0}, 3}, // loco msg
    };
    struct Locomotive trainOne ={1, "St. Speed", 100, "ne", 0};
    struct Locomotive trainTwo ={2, "St. Reverse", -100, "sw", 1};


    exercise7(message);
    exercise8(message,8,128); //locomotive address is the train. 128 is lights off and 129 is on.
    exercise9(&trainOne,"sw");
    printf("%s",trainOne.direction);
}

int main()
{
    //exerciseSet1_6();
    exerciseSet7_11();
}
