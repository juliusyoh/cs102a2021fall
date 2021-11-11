typedef struct { int wall; int treasure; } room_t;
void clear_maze();
int is_wall( int x, int y);
void build_wall( int x, int y);
void clear_wall( int x, int y);

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Maze Project
 * November 11, 2021
 */

/* New Functions Lab 5 */
void set_location_x(int x);
int get_location_x();

void print_2dmaze(int matrixmaze[10][10]);

/* New Functions Lab 6 */
void move_right();
void move_left();

/*Y Coordinates*/
int get_location_y();
void set_location_y(int y);

void move_down();
void move_up();

/*Treasure Functions*/
int is_treasure( int x, int y);
void set_treasure( int x, int y);


