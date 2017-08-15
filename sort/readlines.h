#ifndef READLINES_H_
#define READLINES_H_


#define MAXLINES 1000
#define MAXLINE 1000
#define ALLOCSIZE MAXLINES * MAXLINE
#include <stdio.h>
int readlines(char* linept[], int MAXLINES);

/* reads multiple lines(MAXLINE maximum) and store them in lines
	
return : number of read lines(that are stored in lines)

[OUT] lines : array of string (char pointer) 
								lines read will be stored in this parameter
[IN] MAXLINES : maw of lines that can be stored in lines */


int getline(char line[], int MAXLINE);
/* reads one line from std input and store it in line
	
return : size of read line(0 = empty line)

[OUT] line : read lines
[IN] MAXLINE : maximum line size that can be read */
	

void writelines(char *linesptr, int nlines);
/* prints in linesptr to the stdio

[IN] linesptr : an array of strings(pointers to chars)
[IN] nlines : size of linesptr */


#endif
