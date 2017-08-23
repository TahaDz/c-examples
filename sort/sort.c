#include<stdio.h>
#include<stdbool.h>
#include "readlines.h"
#include "qsort.h"






char *lines_ptr[LINES];

int main(){

   int nlines;
 //Variable used for reading the user input
    char option;
    //Variable used for controlling the while loop
    bool isRunning = true;

    while(isRunning==true)
    {

        //Clears the keyboard buffer
        fflush(stdin);
        //Outputs the options to console
        puts("\n[1] Start"
             "\n[x] Exit");
        //Reads the user's option
        option = getchar();
        //Selects the course of action specified by the option
        switch(option)
        {
            case '1':
								printf("press CTRL+D to end reading\n");
                if ((nlines = readlines(lines_ptr, LINES)) < LINES){
										
										q_sort(lines_ptr, 0, nlines-1);
										printf("The sorted lines\n");
										write_lines(lines_ptr, nlines);
								}

								else 

										printf("error : input too big\n");
                
	     				break;

            case 'x':
                     //Exits the system
                     isRunning = false;
                     return 0;
            default :
                     //User enters wrong input
                     //TO DO CODE
                     break;
        }
    }







return 0;	
}






