#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

main ()
{
    int x;
    int graph[50][50];
    x = MainMenu();

    x == 1 ? teste() : ExitGraph();

    sleep(50000);
}