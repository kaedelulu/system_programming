/*	main.c - demo program

    - various forms of declaring arrays
    - passing arrays to functions
    - include 2 user written .h files
    - breaks program into main, and libraries (each library is  .h / .c file pair )

    - COMPILATION COMMAND assumes 5 files in same dir:  arrDemo1.c arrLib.c arrLib.h functlib.c functlib.h
    - TO COMPILE:  gcc -o prog  arrDemo1.c functlib.c arrlib.c
    - TO EXECUTE:  ./prog
    */

#include <stdlib.h>
#include <stdio.h>
#include "arrlib.h"   /* prototype for array swap and print functs */


/*........................M A I N    F U N C T I O N........................ */

int main( int argc, char *argv[] )
{
    int a[] = { 2,3,5,7,11 };
    int aLen = 5;

    int b[] = { 4,6,8, 12, 16 };
    int bLen=5;

    int c[10], d[7];



    printf("\nBefore swap: \n" );
    printArray( a, aLen ); /* we pass just the array's name. No []s */
    printArray( b, bLen ); /* we pass just the array's name. No []s */

    swapArrayVals( a, aLen, b, bLen ); /* Note we don't use & before the arrays - an array's name is a const pointer */

    printf("\nAfter swap:\n" );
    printArray( a, aLen ); /* we pass just the array's name. No []s */
    printArray( b, bLen ); /* we pass just the array's name. No []s */


    initArray( c, 10, 2 ); /* 10 elements. Each c[i] assigned  i*2 */
    initArray( d, 7, 5 );  /*  7 elements. Each d[i] assigned  i*7 */
    printArray( c, 10 );
    printArray( d, 7 );


    return 0;
}
