#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include "child.h"

void parent(int id1, int id2)
{
    if (id1 == 0)
    {
        if (id2 == 0)
        {
            printf("Susie is ready to play!. My pid is - %d\n", id2);
        }
        else
        {
            printf("John is ready to play!. My pid is - %d\n", id2);
        }
    }
    else
    {
        if (id2 == 0)
        {
            printf("Bea is ready to play!. My pid is - %d\n", id2);
        }
        else
        {
            printf("Steve is ready to play!. My pid is - %d\n", id2);
        }
    }
}
