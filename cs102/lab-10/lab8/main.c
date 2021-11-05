#include <stdio.h>
#include "maze.h"

int main( int argc, char** argv )
{
  int i;
  char userinput[1024];

/* Using functions */
  clear_maze();
  build_wall(3);
  set_location_x(2);
/* Prints the maze */

  print_maze();
  fprintf(stdout,"\n");
  fprintf(stdout,"Type either r or l and hit enter to go right or left\n");
  fprintf(stdout,"Hit CTRL-D or CTRL-C to exit\n");
  fprintf(stdout,"\n");

/* While loop that causes the movement */
  while( fgets( userinput, 1024, stdin ) != NULL )
  {
        if(userinput[0] == 'r'){
        move_right();
        }
        else if(userinput[0] == 'l'){
        move_left();
        }
        else if( sscanf( userinput, "empty %d", &i) == 1) {
        clear_maze(i);
        }
        else if( sscanf( userinput, "wall %d", &i) == 1) {
        build_wall(i);
        }
  print_maze();
  fprintf(stdout,"\n");
  }

/* Creates barrier for input */
  return 0;

}
