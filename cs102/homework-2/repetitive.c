#include <stdio.h>

int main( int argc, char **argv )

{

int i;
int x;

fprintf( stdout, "Julius Yoh\n" );
fprintf( stdout, "Homework 2\n" );
fprintf( stdout, "CS102E\n" );

for ( i = 0; i < 50; i = i + 1 )

{
fprintf( stdout, "dogs\n" );
fprintf( stdout, "cats\n" );

}

fprintf( stdout, "cat and dog\n" );

for ( x = 0; x < 50; x = x + 1 )

{
fprintf( stdout, "dogs\n" );
fprintf( stdout, "cats\n" );

}

return 0;

}
