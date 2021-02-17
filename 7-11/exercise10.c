#include <stdio.h>
#include "exercises7-11.h"
#include "../decoration/decoration.h"

void exercise10(int lightsOffTimes, struct Locomotive trains[])
{
    printf("Sending a signal to trains 0-5 to invert their lights\n\n");

    for (int i = 0; i < lightsOffTimes; i++)
    {
        printf("Telling train number %d to invert its lights.\n", i%5);
        if (trains[i%5].light == 0)
        {
            printf("Train number %d had its lights ON, switching off now.\n", i%5);
            trains[i%5].light = 1;
        } else {
            printf("Train number %d had its lights OFF, switching on now.\n", i%5);
            trains[i%5].light = 0;
        }
        printf("\n");
    }
}