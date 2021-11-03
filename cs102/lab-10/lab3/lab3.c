#include <stdio.h>
typedef struct { int wall; } room_t;
/* Static global variable established  */
static room_t rooms[10];

/* Prototypes etablished */
void clear_maze();
int is_wall( int x);
void build_wall( int x);
void clear_wall( int x);

int main( int argc, char** argv )
{
  int i;
  int location_x = 2;

/* Intializes all the walls to be a default state */

  for( i = 1; i < 10; i++ ) {
    rooms[i].wall = 0;
        }

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

/* FUNCTIONS */
/* Establishes clear function */
void clear_maze()
 {
int i = 0;
for( i = 1; i < 10; i++ ) {
    rooms[i].wall = 0;
   }
 }

/* Establishes is_wall location */
int is_wall( int x)
{
 return rooms[x].wall;
}

/* Establishes build_wall function */
void build_wall(int x)
 {
rooms[x].wall = 1;
 }

/* Establishes clear_wall function */
void clear_wall( int x)
 {
rooms[x].wall = 0;
 }

