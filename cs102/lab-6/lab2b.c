#include <stdio.h>

int main( int argc, char** argv )
{
  fprintf( stdout, "%s\n" "%s\n", argv[1], argv[2]);
  return 0;
}
