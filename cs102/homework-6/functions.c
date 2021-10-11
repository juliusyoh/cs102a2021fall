#include <stdio.h>
#include "functions.h"

/*
 * Julius Yoh
 * CS102 Fall 2021
 * Homework 6 - functions.c - Final Version
 * October 10, 2021
 */

int string_length(char* string)
{
        int j = 0;
        while(string[j] != '\0')
        {
                j = j + 1;
        }
        return j;
}

void reverse_string(char* string)
{
        int x = string_length(string);
        char extra;
        int y = string_length(string)/2;
        int i = 0;
        while (i < y)
                {
                extra = string [i];
                string [i] = string [x - 1];
                string[x - 1] = extra;
                i = i + 1;
                x = x - 1;
                }

}

