#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "functions.h"


/*
 * Julius Yoh
 * CS102 Fall 2021
 * Homework 7 - functions.c - Final Version
 * October 13, 2021
 */

/* This function specifically fills the 12 x 8 matrix */

void fill12x8 (int matrix1[12][8] )
        {
        int i = 0;
        int j = 0;

        for( i = 0; i<12; i=i+1 )
                {
                for ( j = 0; j<8; j=j+1 )
                        {
                        matrix1[i][j] = labs(mrand48()%100);
                        }
                }
        }
/* This function specifically fills the 8 x 12 matrix */

void fill8x12 (int matrix2[8][12] )
        {
        int i = 0;
        int j = 0;

        for( i = 0; i<8; i=i+1 )
                {
                for ( j = 0; j<12; j=j+1 )
                        {
                        matrix2[i][j] = labs(mrand48()%100);
                        }
                }
        }

/* This function specifically multiplies the 2 matrices */

void multiply (int matrix1[12][8], int matrix2[8][12], int matrix3[12][12])
        {
int i = 0;
int j = 0;
int k = 0;
int sum = 0;

        for (i = 0; i<12; i=i+1 )
        {
                for (j = 0; j<12; j=j+1 )
                {
                        for (k = 0; k<8; k=k+1 )
                        {
                                sum = sum +  matrix1[i][k] * matrix2[k][j];
                        }
                        matrix3[i][j] = sum;
                        sum = 0;
                }
        }



        }
        
/* This function specifically prints the 12 x 8 matrix */

void print12x8 (int matrix1[12][8])
        {
int  i = 0;
int j = 0;

fprintf(stdout, "<table>");

        for( i = 0; i < 12; i = i +1)
        {
                fprintf(stdout, "<tr>");
                for (j = 0; j < 8; j = j +1)
                {
                        fprintf(stdout, "<td>%d</td>", matrix1[i][j]);
                }
                                fprintf(stdout, "\n" );
                                fprintf(stdout, "</tr>");
        }
fprintf(stdout, "</table>");
        }
/* This function specifically prints the 8 x 12 matrix */

void print8x12 (int matrix2[8][12])
        {
int  i = 0;
int j = 0;

fprintf(stdout, "<table>");

        for( i = 0; i < 8; i = i +1)
        {
                fprintf(stdout, "<tr>");
                for (j = 0; j < 12; j = j +1)
                {
                        fprintf(stdout, "<td>%d</td>", matrix2[i][j]);
                }
                                fprintf(stdout, "\n" );
                                fprintf(stdout, "</tr>");

        }
fprintf(stdout, "</table>");
        }
/* This function specifically prints the 12 x 12  matrix */


void print12x12 (int matrix3[12][12])
        {
int  i = 0;
int j = 0;

fprintf(stdout, "<table>");

        for( i = 0; i < 12; i = i +1)
        {
                fprintf(stdout, "<tr>");
                for (j = 0; j < 12; j = j +1)
                {
                        fprintf(stdout, "<td>%d</td>",  matrix3[i][j]);
                }
                                fprintf(stdout, "\n" );
                                fprintf(stdout, "</tr>");

        }
fprintf(stdout, "</table>");
        }

