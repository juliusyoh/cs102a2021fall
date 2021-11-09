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

  /* While loop that causes the movement */
  while( fgets( userinput, 1024, stdin ) != NULL )
  {
        if(userinput[0] == 'r'){
        move_right();
        }
        if(userinput[0] == 'l'){
        move_left();
        }
        if( sscanf( userinput, "empty %d", &i) == 1) {
        clear_wall(i);
        }
        if( sscanf( userinput, "wall %d", &i) == 1) {
        build_wall(i);
        }
        if( sscanf( userinput, "save %s", savefile) == 1) {
        save(savefile);
        fprintf(stdout,"\n");
        fprintf(stdout, "|SAVE SUCCESSFUL!|");
        fprintf(stdout,"\n");
        }
        if( sscanf( userinput, "load %s", savefile) == 1) {
        clear_maze();
        load(savefile);
        fprintf(stdout,"\n");
        fprintf(stdout, "|LOAD SUCCESSFUL!|");
        fprintf(stdout,"\n");
        }
        if( sscanf( userinput, "x %d", &i) == 1) {
        set_location_x(i);
        }

  print_maze();
  fprintf(stdout,"\n");
  }

/* Creates barrier for input */
  return 0;

}



