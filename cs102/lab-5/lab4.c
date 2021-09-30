#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab4func.h"
#include "lab4func.c"

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Lab 5 - Lab4.c
 * 09-29-2021
 */

int main ( int argc, char **argv )
 {
	srand48(getpid());
	int array[10];
	fill(array);
	print(array);
	return 0;
 }

