
/*
 * Julius Yoh
 * CS102 Fall 2021
 * Lab 5 - Lab4func.c
 * 09-29-2021
 */

void fill( int array[10] );
void print (int array[10] );

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

