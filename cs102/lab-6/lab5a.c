#include <stdio.h>

int string_length = 42;

int main( int argc, char** argv )
{
int i = 1;


if (argc > 1)
	{
        for(i = 1; i < argc; i = i + 1)
                {
                fprintf( stdout, "%s %d \n", argv[i], string_length );
                }

	}

else 
	{
	fprintf( stdout, "No arguments found!");
	}

  return 0;
}
