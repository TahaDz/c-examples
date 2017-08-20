#ifndef QSORT_H_
#define QSORT_H_

#include<stdio.h>

void qsort(char *lines_ptr[], int left, int right );
/* sort an array of srings using quick sort algorithm
	
[IN-OUT] lines_ptr : array of strings to be sorted 
[IN] left : starting index for lines to be sorted in linesptr array
[IN] right : ending index for lines to be sorted in linesptr array */

#endif
void swap(char *v[], int i, int j);
/* interchange two elements

[IN-OUT] v : the array which contains the elements to interchange
[IN] i : the first element index
[IN] j : the second element index*/
