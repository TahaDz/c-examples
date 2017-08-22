#include "readlines.h"



int get_line(char line[], int MAXLINE){
	
	int c, i;
	// read charcters from std input & store it in line array until new line or EOF	
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
		line[i] = c;
	if (c == '\n') {
		line[i++] = c;
		
	}
	//printf("--------------%d----------------\n",i);
	line[i] = '\0';// end of string
	return i;// line size
}



int readlines(char *lines_ptr[], int MAXLINES){
	int len, nlines;  
	char *p, line[LENGTH];
	nlines = 0;

	while ((len = get_line(line, LENGTH)) > 0){	
		//skip empty lines
		if (len == 1) // contains only \n
			continue;
		
			if(nlines >= MAXLINES || (p = alloc(len)) == NULL) 		// overflow
				return -1;
			else {
					line[len-1] = '\0';
					strcopy(p, line);
					lines_ptr[nlines++] = p;
			}
		}
		
	return nlines;
}

void write_lines(char *lines_ptr[], int nlines){ // print strings

	int i;
	for (i = 0; i < nlines; i++)
		printf("%s\n", lines_ptr[i]);
}




static char allocbuf[ALLOCSIZE]; // allocation buffer
static char *allocp = allocbuf; // pointer to the next free space

char* alloc(int n){

	if( allocbuf + ALLOCSIZE - allocp >= n ){
		allocp += n;		
		return allocp - n;
	}
	else
		printf("error: space insufficent\n");
		return 0;

}


void strcopy(char *s, char * t){ // copying a string to another one

	while((*s++ = *t++))
		;

}
