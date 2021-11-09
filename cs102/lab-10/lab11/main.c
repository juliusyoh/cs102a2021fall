#include <stdio.h>
#include "maze.h"
#include "file.h"

int main( int argc, char** argv )
{
  int i;
  char userinput[1024];
  char savefile[100];

/* Using functions */
  clear_maze();
  set_location_x(0);


/* Prints the maze */

  fprintf(stdout,"\n");
  fprintf(stdout,"|[Maze Game]|");
  fprintf(stdout,"\n");
  fprintf(stdout,"Type either r or l and hit enter to go right or left.\n");
  fprintf(stdout,"Hit CTRL-D or CTRL-C to exit.\n");
  fprintf(stdout,"\n");
  print_maze();
  fprintf(stdout,"\n");


