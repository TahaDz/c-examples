#ifndef READLINES_H_
#define READLINES_H_


#include<stdio.h>
#define LINES 1000
#define LENGTH 1000
#define ALLOCSIZE LINES * LENGTH
int readlines(char* lines_ptr[], int MAXLINES);

/*reads multiple lines(MAXLINES maximum) and store them in lines_ptr
	
return : number of read lines(that are stored in lines_ptr)

[OUT] lines_ptr : array of strings (char pointers) 

lines read will be stored in this parameter

[IN] MAXLINES : max of lines that can be stored in lines_ptr*/


int get_line(char line[], int MAXLINE);

/*reads one line from std input and store it in line
	
return : size of read line(0 = empty line)

[OUT] line : read line

[IN] MAXLINE : maximum line size that can be read*/


void write_lines(char *lines_ptr[], int nlines);

/*prints lines in lines_ptr to the stdio

[IN] lines_ptr : an array of strings(pointers to chars)

[IN] nlines : size of lines_ptr*/


#endif


char* alloc(int n);

/* allocates n elements in the buffer

return : pointer to the first allocated elements 

[IN] n : number of elements to allocate */

void strcopy(char *s, char * t);

/* copy a string to another one

[IN] t : string to be copied
[OUT] s : the copy

*/
