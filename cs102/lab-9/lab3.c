#include <stdio.h>

int main( int argc, char** argv )
{

FILE* file;
char scratch[1024];
char filename[1024] = "foo.txt";
file = fopen( filename, "r");
if( file !=NULL )
{
	while( fgets( scratch, 1024, file ) != NULL )
	{
                fprintf(stdout, "%s", scratch);

	}
	fclose( file );

}
else
{
	fprintf(stdout, "Error!");
}
  return 0;
}
