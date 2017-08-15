#ifndef QSORT_H_
#define QSORT_H_

#include<stdio.h>

void qsort(char *linesptr[], int left, int right );
/* sort an array of srings using quick sort algorithm
	
[IN-OUT] linesptr : array of strings to be sorted 
[IN] left : starting index for lines to be sorted in linesptr array
[IN] right : ending index for lines to be sorted in linesptr array */

#endif
