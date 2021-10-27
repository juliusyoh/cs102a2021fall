#include <stdio.h>

int string_length(char* string);

int print_file( char* filename);

int main( int argc, char** argv )
{
FILE* file;
char scratch[1024];
char filename[1024] = "foo.txt";
file = fopen( filename, "r");
int n = 0;
int i = 0;
int s = 0;

if(argc)
        {
        for( i = 1; i<argc; i = i + 1)
                {
                print_file( argv[i] );
                }
        }
else
        {
                fprintf(stdout, "no arguments found");
        }

int string_length( char* string )
{
int i = 0;
while(string[i] != '\0')
{
        i = i + 1;
}

return i;
}
if( file !=NULL )
{
        while( fgets( scratch, 1024, file ) != NULL )
        {
                n = n + 1;
                s = string_length(scratch);
        }
        fprintf(stdout, "%s: %d lines %d bytes \n", filename, n, s);
        fclose(file);
}
}

int print_file( char*file)
{
        fprintf(stdout, "print_file(%s)\n", file);
}

  
  
