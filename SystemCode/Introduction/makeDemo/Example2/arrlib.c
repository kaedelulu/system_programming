#include <stdlib.h>
#include <stdio.h>
#include "functlib.h" /* we need it for the swapInts function */
#include "arrlib.h"   /* prototypes of the funct below */


void initArray( int arr[], int arrLen, int factor)
{
    int i;
    for (i=0 ; i<arrLen ; ++i )
        arr[i] = i*factor;
}
void swapArrayVals( int a[], int aLen, int b[], int bLen )
{
    int i;
    if (aLen != bLen )
        return; /* don't try to swap diff sized arrays */
    for (i=0 ; i < aLen ; ++i)
        swapInts( &a[i], &b[i] ); /* RE-USE working code since array elements are int variables */
}

void printArray( int arr[], int arrLen )
{
    int i;
    for (i=0 ; i < arrLen ; ++i)
        printf( "%3d ", arr[i] );
    printf("\n");
}
