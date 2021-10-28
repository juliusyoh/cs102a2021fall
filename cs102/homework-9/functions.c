/*
 * Julius Yoh
 * CS102 Fall 2021
 * Homework 9 - functions.h - Final Version
 * October 27, 2021
 */

#include <stdio.h>
#include "functions.h"

int string_length( char* string )
{
        int i = 0;
        while(string[i] != '\0')
        {
                i = i + 1;
        }
        return i;
}


int  word_counter( char* string)
{
        int i = 0;
        int j = 0;
        while(string[i] != '\0')
        {
                if (string[i] == ' ')
                {
                        j = j + 1;
                }
                if (string[i] == '.')
                {
                        j = j + 1;
                }
                i = i + 1;
        }
        return j;
}

int print_file( char*filename)
{
        FILE* file;
        char scratch[1024];
        file = fopen( filename, "r" );
        int n = 0;
        int s = 0;
        int t = 0;

        if( file !=NULL )
        {
                while( fgets( scratch, 1024, file ) != NULL )
                {
                        n = n + 1;
                        s = s + string_length(scratch);
                        t = t + word_counter(scratch);
                }
                fprintf(stdout, "%s: %d lines %d words %d bytes \n", filename, n, t, s);
                fclose(file);
        }

}


