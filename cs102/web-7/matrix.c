*
 * Julius Yoh
 * CS102 Fall 2021
 * Homework 7 - Matrix.c - Final Version
 * October 13, 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "functions.h"

int main(int argc, char**argv)
        {

fprintf(stdout,"Content-type: text/html\n\n" );
fprintf(stdout,"<html>");
fprintf(stdout,"<head>");
fprintf(stdout,"<title>Matrix</title>");
fprintf(stdout,"</head>");
fprintf(stdout,"<body>");
fprintf(stdout,"<table>");

        int matrix1 [12][8];
        int matrix2 [8][12];
        int matrix3 [12][12];
        srand48(getpid());
        fill12x8(matrix1);
        fill8x12(matrix2);

/* Multiplying  Matrices */

        multiply(matrix1,matrix2,matrix3);

        fprintf(stdout, "\n" );
        fprintf(stdout, "<h1>Matrix 1:</h1>");
        fprintf(stdout, "\n" );

        print12x8(matrix1);

/* New Line Between The Matrices */

        fprintf(stdout, "\n" );

       fprintf(stdout, "<h1>Matrix 2:</h1>");
        fprintf(stdout, "\n" );
        print8x12(matrix2);
/* New Line Between The Matrix 2 and Product Matrix */

 fprintf(stdout, "\n" );


        fprintf(stdout, "<h1>Matrix 3 - Product Matrix:  </h1>");
        fprintf(stdout, "\n" );

        print12x12(matrix3);

        fprintf(stdout, "\n" );

fprintf(stdout,"</table>");
fprintf(stdout,"</body>");
fprintf(stdout,"/html>");




        return 0;
        }

