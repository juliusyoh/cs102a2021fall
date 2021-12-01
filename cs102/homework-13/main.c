#include <stdio.h>
#include "maze.h"
#include "file.h"

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Maze Project
 * November 11, 2021
 */


int main( int argc, char** argv )
{
  int i;
  int j;
  char userinput[1024];
  char savefile[100];

/* Using functions */
  clear_maze();
  set_location_x(0);
  set_location_y(0);

int matrixmaze[10][10];

/* Prints the maze */

  fprintf(stdout,"\n");
  fprintf(stdout,"|[Maze Game]|");
  fprintf(stdout,"\n");
  fprintf(stdout,"Type either r or l and hit enter to go right or left.\n");
  fprintf(stdout,"Type either u or d and hit enter to go up or down. \n");
  fprintf(stdout,"Hit CTRL-D or CTRL-C to exit.\n");
  fprintf(stdout,"\n");

  if (argc > 1)
	{
	load(argv[1]);
	}


  print_2dmaze(matrixmaze);
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
	if( userinput[0] == 'u'){
        move_up();
	}
	if( userinput[0] == 'd'){
        move_down();
	}
        if( sscanf( userinput, "empty %d %d", &i, &j) == 2) {
        clear_wall(i, j);
        }
        if( sscanf( userinput, "wall %d %d", &i, &j) == 2) {
        build_wall(i, j);
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
	if( sscanf( userinput, "y %d", &i) == 1) {
	set_location_y(i);
	}

  print_2dmaze(matrixmaze);
	if( is_treasure(get_location_x(),get_location_y()) == 1) {
  	fprintf(stdout,"\n");
	fprintf(stdout,"YOU WIN!");
	fprintf(stdout,"\n");
	return 0;
	}
	if( is_monster(get_location_x(),get_location_y()) == 1) {
	fprintf(stdout, "\n");
	fprintf(stdout, "THOU ART DEAD!");
	fprintf(stdout, "\n");
	fprintf(stdout, "GAME OVER!");
        fprintf(stdout, "\n");	
	return 0;
	}
  fprintf(stdout,"\n");
  }

/* Creates barrier for input */
  return 0;

}






