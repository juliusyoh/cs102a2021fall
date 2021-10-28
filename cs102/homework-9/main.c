#include <stdio.h>
#include "functions.h"

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Homework 9 - functions.h - Final Version
 * October 27, 2021
 */

int main( int argc, char** argv )
{
int i = 0;
        if(argc)
        {
                for( i = 1; i<argc; i = i + 1)
                {
                        print_file( argv[i] );
                }
        }
        else
        {
                fprintf(stdout, "no arguments found");
        }

}

