#include <stdio.h>
#include "maze.h"

int main( int argc, char** argv )
{
  int i;

/* Using functions */
  clear_maze();
  build_wall(3);
  set_location_x(2);
/* Prints the maze */

  print_maze();

/* Creates barrier for input */
fprintf(stdout, "\n");
  return 0;
}



