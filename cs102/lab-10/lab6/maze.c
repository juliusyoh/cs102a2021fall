#include <stdio.h>
#include "maze.h"

/* Static global variable established  */
static room_t rooms[10];
static int location_x;

/* FUNCTIONS */


/* Moves x to right  */
void move_right()
{
 if( (location_x + 1) <= 9 )
 {
  if( ! is_wall(location_x + 1))
  {
   location_x = location_x + 1;
  }
 }
}

/* Moves x to left */
void move_left(){
 if( (location_x - 1) >= 0 ){
  if( ! is_wall(location_x - 1)){
   location_x = location_x - 1;
  }
 }
}

/* Returns  a copy of the global variable "location_x"  */
int get_location_x()
{
return location_x;

}

void set_location_x( int x )
{
location_x = x;
}


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

void print_maze()
 {
int i = 0;
for( i = 0; i < 10; i++ ) {
        if (i == location_x){
                fprintf(stdout, "x ");
        }
        else if (is_wall(i) == 0){
                fprintf(stdout, ". ");
        }

        else if (is_wall(i) == 1){
                fprintf(stdout, "##");
        }

 }

 }



