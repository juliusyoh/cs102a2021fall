#include <stdio.h>
#include <string.h>
#include <curses.h>

int main()
        {

/* This section asks for the words and sorts them via for and if statements */

        char names[3][15];
        char nm[15];
        printf ("Enter five words to be sorted:");
        fprintf(stdout, "\n" );

        for (int i = 0; i < 5; i++)
                {
                gets(names[i]);

                }
        for (int i = 0; i < 4; i++)
                {
                for(int j = i + 1; j < 5; j++)
                        {
                        if(strcmp(names[i],names[j]) > 0)
                                {
                                strcpy(nm,names[i]);
                                strcpy(names[i],names[j]);
                                strcpy(names[j],nm);
                                }
                        }
                }

/* This section prints the sorted words afterwards */
        printf("\nWords after sorting are: \n");
        fprintf(stdout, "\n" );

        for (int i = 0; i < 5; i++)
                {
                puts(names[i]);
                }
                fprintf(stdout, "\n" );

        }
