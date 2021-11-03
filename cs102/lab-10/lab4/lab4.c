#include <stdio.h>
#include "maze.h"

int main( int argc, char** argv )
{
  int i;
  int location_x = 2;

/* Using functions */
  clear_maze();
  build_wall(3);


/* Prints to a special state */

  for( i = 1; i < 10; i++ ) {
        if (is_wall(i) == 0){
        fprintf(stdout, ". ");
        }

        if (is_wall(i) == 1){
        fprintf(stdout, "##");
        }

/* Creates location status */

        if (i == location_x){
        fprintf(stdout, "x ");
        }
  }

/* Creates barrier for input */
fprintf(stdout, "\n");
  return 0;
}




