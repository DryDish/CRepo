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
    exercise7();
}

int main(){
    exerciseSet1_6();
    exerciseSet7_11();
}
