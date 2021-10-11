#include <stdio.h>
#include "functions.h"

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Homework 6 - reverse.c - Final Version
 * October 10, 2021
 */


int main( int argc, char** argv )
{
int i = 1;
  
/* This if statement drives the functions*/  
  
if (argc > 1)
        {
        for(i = argc; i-- > 1; )
                {
                int x = string_length(argv [i]);
                reverse_string(argv [i]);
                fprintf( stdout, "%s %d\n", argv[i], x);
                }

        }

else
        {
        fprintf( stdout, "No arguments found!");
        }

  return 0;
}




