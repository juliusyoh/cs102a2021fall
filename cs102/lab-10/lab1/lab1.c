#include <stdio.h>
typedef struct { int wall; } room_t;
int main( int argc, char** argv ) {
  room_t rooms[10];
  int i;

/* intializes all the walls to be a default state */

  for( i = 0; i < 10; i++ ) {
    rooms[i].wall = 0;
        }

/* sets room 3 to a special state */

  rooms[3].wall = 1;

/* prints to a special state */

  for( i = 0; i < 10; i++ ) {
        if (rooms[i].wall == 0){
        fprintf(stdout, ".");
        }

        if (rooms[i].wall == 1){
        fprintf(stdout, "##");
        }
  }
fprintf(stdout, "\n");
  return 0;
}

