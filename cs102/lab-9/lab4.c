#include <stdio.h>

int main( int argc, char** argv )
{

FILE* file;
char scratch[1024];
char filename[1024] = "foo.txt";
file = fopen( filename, "r");
int n = 0;

if( file !=NULL )
{
        while( fgets( scratch, 1024, file ) != NULL )
        {
                n = n + 1;
        }
        fprintf(stdout, "%s: %d lines \n", filename, n);
        fclose(file);

}
else
{
        fprintf(stdout, "Error!");
}
  return 0;
}
