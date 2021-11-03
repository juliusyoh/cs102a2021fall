#include <stdio.h>
typedef struct { int wall; } room_t;
int main( int argc, char** argv ) {
  room_t rooms[10];
  int i;
  for( i=0; i<10; i++ ) {
    rooms[i].wall=0;
        }

  rooms[3].wall = 1;


  for( i=0; i<10; i++ ) {
    fprintf( stdout, "room[%d] wall=%d \n", i, rooms[i].wall);
  }
  return 0;
}

