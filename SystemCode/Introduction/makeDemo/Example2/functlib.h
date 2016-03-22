
/*
   FUNCTLIB_H

   The #ifndef, #define and #endif are  pre-processor commands to test whether a
   symbol FUNCTLIB_H has been defined and if so - skip the whole block
   else compile it.  After the first time this file is compiled    the symbol
   FUNCTLIB_H gets defined and the file will never get compiled again.
   This prevents redundant compilation which results in redefinition of functions
   and compilation errors.

   This mechanism relieves the programmer from having to worry about whether some
   include that is needed in many places - got included multiple times in the same file.
   */


#ifndef FUNCTLIB_H
#define FUNCTLIB_H

#define EXPECTED_CONVERSIONS 2
#define FOO 12

void swapInts( int *a, int *b );

#endif
