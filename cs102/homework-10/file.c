#include <stdio.h>
#include "maze.h"
#include "file.h"

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Maze Project
 * November 11, 2021
 */

void load(char* filename)
{
	FILE* file;
	char scratchpad[1024];
	file = fopen( filename, "r" );
        int x;
	int y;

	if( file != NULL)
	{
		while( fgets( scratchpad, 1024, file ) != NULL )
		{
		  if( sscanf(scratchpad, "WALL %d %d", &x, &y) == 2)
		  {
			  build_wall(x,y);
		  }
		  if ( sscanf(scratchpad, "X %d", &x) == 1)
		  {
		         set_location_x(x);
		  }
		  if ( sscanf(scratchpad, "Y %d", &y) == 1)
		  {
			 set_location_y(y);
		  }
		  if ( sscanf(scratchpad, "TREASURE %d %d", &x, &y) == 2)
		  {
			set_treasure(x, y);
		  }
		}
                fclose(file);
	}
}

void save(char* filename)
{
  FILE* file;
  int x;
  int y;
  file = fopen( filename, "w" );
  if (file != NULL ) {

    for(x = 1; x < 10; x++ ){

	for(y = 1; y < 10; y++ ){

            if (is_wall(x,y) == 1){
            fprintf(file, "WALL %d %d \n", x, y );
				}
	    if (is_treasure(x,y) == 1){
            fprintf(file, "TREASURE %d %d \n", x, y );
            }
            }
    }
   fprintf(file, "X %d\n", get_location_x()); 
   fprintf(file, "Y %d\n", get_location_y());

   fclose(file);
  }
}

