/*
   FUNCTLIB.C - function definitions used in main.c
*/


#include "functlib.h"

/*
SWAPINTS: uses pointers to exchange values of incoming args
*/
void swapInts( int *a, int *b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
