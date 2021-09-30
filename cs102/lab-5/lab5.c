#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab5func.h"

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Lab 5 - Lab4.c
 * 09-29-2021
 */

int main ( int argc, char **argv )
 {
	srand48(getpid());
	int matrix[5][5];
	int matrix1[5][5];
	fill(matrix);
	print(matrix);
	fprintf( stdout, "\n" );
	fill(matrix1);
	print(matrix);
	return 0;
 }

