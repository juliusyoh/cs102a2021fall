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
  move_right();

fprintf(stdout, "\n");
  print_maze();

  move_left();
fprintf(stdout, "\n");

  print_maze();
  move_left();
fprintf(stdout, "\n");

  print_maze();
  move_left(); 
fprintf(stdout, "\n");

  print_maze();
fprintf(stdout, "\n");


/* Creates barrier for input */
fprintf(stdout, "\n");
  return 0;
}


