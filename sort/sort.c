#include<stdio.h>
#include "readlines.h"
#include"qsort.h"






char *lines_ptr[LINES];

int main(){

	int nlines = 0;
	printf("This program sort lines from input & print them sorted :\n \thow to us it :\n\t1- write several lines (each line will end with clicking ENTR button)\n\t2-click on CTRL+D to end the reading\n");
	if ((nlines = readlines(lines_ptr, LINES)) < LINES){
		
		qsort(lines_ptr, 0, nlines-1);
		printf("\t\t\tthe sorted lines :\n");
		write_lines(lines_ptr, nlines);
	
	}

	else 

		printf("error : input too big\n");




	return 0;
}






