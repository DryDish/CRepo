#include <stdio.h>
#include <stdlib.h>

#include "1-6/exercises1-6.h"
#include "7-11/exercises7-11.h"
#include "12-16/exercises12-16.h"
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
    struct Locomotive trainArray[5] ={
                    {0, "St. Speed", 100, "ne", 0},
                    {1, "St. Slow", 10, "nw", 0},
                    {2, "St. Reverse", -50, "sw", 1},
                    {3, "St. Stop", 0, "se", 0},
                    {4, "St. N/A", 0, "ns", 1},
    };
    //-----------------------------------------------------------------------------------------------------------

    exercise7(message);
    exercise8(message,8,128); //locomotive address is the train. 128 is lights off and 129 is on.
    exercise9(&trainOne,"sw");
    exercise9a(trainOne, trainTwo);
    exercise10(10, trainArray);
}

void exerciseSet12_16()
{
    exercise12();
    exercise13();
    exercise14();
    //exercise15();
    //exercise16();
}
int main()
{
    //exerciseSet1_6();
    //exerciseSet7_11();
    exerciseSet12_16();
}
