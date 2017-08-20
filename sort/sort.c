#include<stdio.h>
#include "readlines.h"
#include"qsort.h"






char *lines_ptr[LINES];

int main(){

	int nlines = 0;
	
	if ((nlines = readlines(lines_ptr, LINES)) < LINES){


		qsort(lines_ptr, 0, nlines-1);
		write_lines(lines_ptr, nlines);
	
	}

	else 

		printf("error : input too big\n");




	return 0;
}






