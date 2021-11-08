#include <stdio.h>
#include "maze.h"
#include "file.h"

void load(char* filename)
{
        FILE* file;
        char scratchpad[1024];
        file = fopen( filename, "r" );
        int x;

        if( file != NULL)
        {
                while( fgets( scratchpad, 1024, file ) != NULL )
                {
                  if( sscanf(scratchpad, "WALL %d", &x) == 1)
                  {
                          build_wall(x);
                  }
                }
                fclose(file);
        }
}




