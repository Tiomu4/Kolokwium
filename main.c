#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include "parent.h"
#include "child.h"

int main(int argc, char const *argv[])
{
   int id1 = fork();
    int id2 = fork();
    parent(id1,id2);
    return 0;
}
