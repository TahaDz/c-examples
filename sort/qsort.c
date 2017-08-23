#include "qsort.h"




/* q_sort: sort v[left]...v[right] into increasing order */
void q_sort(char *v[], int left, int right){

int i, last;
	if (left >= right) /* do nothing if array contains fewer than two elements */
		return;	
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left+1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0){
			swap(v, ++last, i);
		}
	swap(v, left, last);
	q_sort(v, left, last-1);
	q_sort(v, last+1, right);

}


void swap(char *v[], int i, int j){

	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
