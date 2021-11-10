include <stdio.h>
#include "maze.h"
#include "file.h"

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
                  if( sscanf(scratchpad, "WALL %d", &x) == 1)
                  {
                          build_wall(x);
                  }
                  if ( sscanf(scratchpad, "X %d", &y) == 1)
                  {
                         set_location_x(y);
                  }
                }
                fclose(file);
        }
}

void save(char* filename)
{
  FILE* file;
  int x;
  file = fopen( filename, "w" );
  if (file != NULL ) {

    for(x = 1; x < 10; x++ ){

       if (is_wall(x) == 1){
       fprintf(file, "WALL %d \n", x );
       }
    }
   fprintf(file, "X %d \n", get_location_x() );

   fclose(file);
  }
}



