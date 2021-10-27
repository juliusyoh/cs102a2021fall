#include <stdio.h>
int main( int argc, char** argv )
{
int i = 1;
        for(i = 1; i < argc; i = i + 1)
                {
                fprintf( stdout, ("myfunction(%s)\n"), argv[i]);
                }


  return 0;
}
