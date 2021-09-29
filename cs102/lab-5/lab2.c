#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Lab 5 - Lab2.c
 * 09-29-2021
 */

int main ( int argc, char **argv )

 {
	int array[9], i;
	int random;

	for( i=0; i<10; i=i+1 ) 
	{
		array [i] = mrand48()%100;
		array [i] = abs(array [i]);
                
	}

	for (i = 0; i < 10; i = i +1)
	{
		fprintf(stdout, "%d\n", array [i]);

	}

return 0;
}
	
