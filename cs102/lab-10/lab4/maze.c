#include <stdio.h>
#include "maze.h"

/* Static global variable established  */
static room_t rooms[10];

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
