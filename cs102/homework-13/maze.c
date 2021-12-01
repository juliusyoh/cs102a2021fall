#include <stdio.h>
#include "maze.h"

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Maze Project
 * November 11, 2021
 */


/* Static global variable established  */
static room_t rooms[10][10];
static int location_x;
static int location_y;


/* FUNCTIONS */

/*DIRECTIONS*/
/* Moves x to right  */
void move_right()
{
 if( (location_x + 1) <= 9 )
 {
  if( ! is_wall(location_x + 1, location_y))
  {
   location_x = location_x + 1;
  }
 }
}

/* Moves x to left */
void move_left(){
 if( (location_x - 1) >= 0 ){
  if( ! is_wall(location_x - 1, location_y)){
   location_x = location_x - 1;
  }
 }
}

/*Move x Up*/
void move_up(){
 if( (location_y - 1) >= 0){
  if( ! is_wall(location_x, location_y-1)){
   location_y = location_y - 1;
  }
 }
}

/*Move x Down*/
void move_down(){
 if( (location_y + 1) <= 9){
  if( ! is_wall(location_x, location_y+1)){
   location_y = location_y + 1;
  }
 }
}

/*LOCATION*/
/* Returns  a copy of the global variable "location_x"  */
int get_location_x()
{
return location_x;

}

/* Get location of y */
int get_location_y()
{
return location_y;

}

/* Set location of x */
void set_location_x( int x )
{
location_x = x;
}

/* Set location of y*/
void set_location_y(int y)
{
location_y = y;
}

/*Treasure Location*/
int is_treasure( int x, int y)
{
  return rooms[x][y].treasure;
}

void set_treasure( int x, int y)
{
  rooms[x][y].treasure = 1;
}

/* Monster Location*/
int is_monster( int x, int y)
{
  return rooms[x][y].monster;
}

void set_monster( int x, int y)
{
  rooms[x][y].monster = 1;
}

/*CLEARING*/
/* Establishes clear function */
void clear_maze()
 {
int i = 0;
int j = 0;
for( i = 1; i < 10; i++ ) {
	for( j = 1; j < 10; j++ ){
    	rooms[i][j].wall = 0;
   	}
	}
 }

/*WALL FUNCTIONS*/
/* Establishes is_wall X location */
int is_wall( int x, int y)
{
 return rooms[x][y].wall;
}

/* Establishes build_wall function */
void build_wall(int x, int y)
 {
rooms[x][y].wall = 1;
 }

/* Establishes clear_wall function */
void clear_wall( int x, int y)
 {
rooms[x][y].wall = 0;
 }

/* Prints 2D Matrix Maze */
void print_2dmaze(int matrixmaze[10][10]) {
	int i = 0;
        int j = 0;
	for ( j = 0; j < 10; j++ ) {
                   for ( i = 0; i < 10; i++ ) {
 		   	if (i == location_x && j == location_y){
                   	fprintf(stdout, "x ");
			}
                        else if (is_treasure(i,j) == 1){
                        fprintf(stdout, "T ");
                        }
			else if (is_monster(i, j) == 1){
			fprintf(stdout, "M ");
			}
			else if (is_wall(i,j) == 0){
                	fprintf(stdout, ". ");
                        }
                	else if (is_wall(i,j) == 1){
                	fprintf(stdout, "##");
			}

		   }
	fprintf(stdout, "\n" );
}

}
