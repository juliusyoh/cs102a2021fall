/*
 * Julius Yoh
 * CS102 Fall 2021
 * Homework 5 - Main.c - Final Version - 12 x 12 Matrix
 * October 4, 2021
 */


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "functions.h"
int main(int argc, char**argv)
        {
        int matrix1 [12][8];
        int matrix2 [8][12];
        int matrix3 [12][12];
        srand48(getpid());
        fill12x8(matrix1);
        fill8x12(matrix2);

/* Multiplying  Matrices */

        multiply(matrix1,matrix2,matrix3);

        fprintf(stdout, "\n" );
        fprintf(stdout, "Matrix 1:");
        fprintf(stdout, "\n" );

        print12x8(matrix1);
        
/* New Line Between The Matrices */

        fprintf(stdout, "\n" );

       fprintf(stdout, "Matrix 2:");
        fprintf(stdout, "\n" );
        print8x12(matrix2);

/* New Line Between The Matrix 2 and Product Matrix */

 fprintf(stdout, "\n" );


        fprintf(stdout, "Matrix 3 - Product Matrix: ");
        fprintf(stdout, "\n" );

        print12x12(matrix3);

        fprintf(stdout, "\n" );

        return 0;
        }
