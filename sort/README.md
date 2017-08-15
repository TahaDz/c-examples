# Sort lines read from std input -- \[IN-PROGRESS\]

The program goes as follow :

		1. reads `\n`-separated lines until EOF
		2. sorts stored/read lines
		3. prints stored lines & exit




# API 
        ```C
	int readlines(char* linept[], int MAXLINES);
        ```
	reads multiple lines(MAXLINE maximum) and store them in lines
	
	return : number of read lines(that are stored in lines)

	[OUT] lines : array of string (char pointer) 
								lines read will be stored in this parameter
	[IN] MAXLINES : maw of lines that can be stored in lines 


	| int getline(char line[], int MAXLINE);
	reads one line from std input and store it in line
	
	return : size of read line(0 = empty line)

	[OUT] line : read lines
	[IN] MAXLINE : maximum line size that can be read
	
	| void qsort(char *linesptr[], int left, int right );
	sort an array of srings using quick sort algorithm
	
	[IN-OUT] linesptr : array of strings to be sorted 
	[IN] left : starting index for lines to be sorted in linesptr array
	[IN] right : ending index for lines to be sorted in linesptr array

	| void writelines(char *linesptr, int nlines);
	prints in linesptr to the stdio

	[IN] linesptr : an array of strings(pointers to chars)
	[IN] nlines : size of linesptr


# INTERNAL API 
	
	| void strcpy( char *s, char *t);
	copy a string t to s

	[IN] t : string to be copied
	[OUT] s : the copie of the sting t

	
	| char *alloc(char *allocbuf[] ,int n);
	store n elements in allocbuf

	return : pointer to the first allocated element 

	[IN] n : number of elements to be stored
	[IN-OUT] allocbuf : the array where the elements will be stored


	











+ **How to compile code**
```bash
$ gcc -g -Wall sort.c -o sortlines
```
