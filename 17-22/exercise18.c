#include <stdio.h>
#include "../decoration/decoration.h"

/*
 * What will the printout of this program be ?
 */

int exercise18()
{
    separatorStart("18");

    printf("\nThis is roughly what i expected the sort to look like:\n"
           " ORIGINAL:  7, 3, 9, 2, 11\n"
           "  7 3 - > 3 7\n"
           "      3, 7, 9, 2, 11\n"
           "  9 2 -> 2 9\n"
           "      3, 7, 2, 9, 11\n"
           "  7 2 -> 2 7\n"
           "      3, 2, 7, 9, 11\n"
           "  3 2 -> 2 3\n"
           " FINAL: 2, 3, 7, 9, 11\n");

    separatorEnd("18");
    return 0;
}