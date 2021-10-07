#include <stdio.h>

int string_length(char* string);

int main( int argc, char** argv )
{
int i = 1;

if (argc > 1)
	{
        for(i = argc; i-- > 1; )                
		{
		int x = string_length(argv [i]);
                fprintf( stdout, "%s %d \n", argv[i], x );
                }

	}

else 
	{
	fprintf( stdout, "No arguments found!");
	}

  return 0;
}
int string_length(char* string)
{
	int j = 0;
	while(string[j] != '\0')
	{
		j = j + 1;
	}
	return j;
}
