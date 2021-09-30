#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab5func.h"

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Lab 5 - Lab4func.c
 * 09-29-2021
 */

void fill (int matrix[5][5])
 {
int  i = 0;
int j = 0;

for( i=0; i<5; i=i+1 )
        {
	for( j = 0; j < 5; j = j + 1){
                matrix[i][j] =  labs(mrand48()%100);
  		}
        }

 }

void print (int matrix[5][5])


 {
int  i = 0;
int j = 0;

	for (i = 0; i < 5; i = i +1)
	{
		for (j = 0; j < 5; j = j +1)
		{
			fprintf(stdout, "%5d", matrix[i][j]);
			
		}
		fprintf(stdout, "\n" );
	}
 
 }

