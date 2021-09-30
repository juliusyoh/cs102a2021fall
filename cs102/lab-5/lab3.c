#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Lab 5 - Lab3.c
 * 09-29-2021
 */

void fill( int array[10] );
void print (int array[10] );

int main ( int argc, char **argv )
 {
	srand48(getpid());
	int array[10];
	fill(array);
	print(array);
	return 0;
 }

void fill (int array[10])
 {

int  i = 0;

for( i=0; i<10; i=i+1 )
        {
                array [i] = mrand48()%100;
                array [i] = abs(array [i]);
  
        }

 }

void print (int array[10])


 {

int i = 0;

	for (i = 0; i < 10; i = i +1)
	{
		fprintf(stdout, "%d\n", array [i]);

	}
 
 }

