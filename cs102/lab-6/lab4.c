#include <stdio.h>
int main( int argc, char** argv )
{
int i = 1;


if (argc > 1)
        {
        for(i = argc; i-- > 1; )
                {
                fprintf( stdout, "%s\n", argv[i]);
                }

        }

else
        {
        fprintf( stdout, "No arguments found!");
        }

  return 0;
}
