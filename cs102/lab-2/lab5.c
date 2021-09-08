#include <stdio.h>
int main ( int argc, char **argv )
{

int i;
int x;

for ( i = 0; i < 11; i = i + 1 )

{ 

fprintf( stdout, "hello world\n" );

}


fprintf( stdout, "I like chicken!\n" );


for ( x = 0; x < 11; x = x + 1)

{

fprintf( stdout, "goodbye!\n" );

}


return 0;
}
