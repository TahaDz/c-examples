# Sort lines read from std input -- \[IN-PROGRESS\]

The program goes as follow :

1. reads `\n`-separated lines until EOF
2. sorts stored/read lines
3. prints stored lines & exit




# API 
```C
int readlines(char* lines_ptr[], int MAXLINES);
```
reads multiple lines(`MAXLINES` maximum) and store them in `lines_ptr`
	
- return : number of read lines(that are stored in `lines_ptr`)

- [OUT] `lines_ptr` : array of strings (char pointers) 

lines read will be stored in this parameter

- [IN] `MAXLINES` : max of lines that can be stored in `lines_ptr`

```C
int getline(char line[], int MAXLINE);
```
reads one line from std input and store it in `line`
	
- return : size of read line( 1 = empty line & 0 = EOF)

- [OUT] `line` : read line

- [IN] `MAXLINE` : maximum line size that can be read

```C
void qsort(char *lines_ptr[], int left, int right );
```
sort an array of srings using quick sort algorithm
	
- [IN-OUT] `lines_ptr` : array of strings to be sorted 

- [IN] `left` : starting index for lines to be sorted in `lines_ptr`

- [IN] `right` : ending index for lines to be sorted in `lines_ptr` 

```C
void write_lines(char *lines_ptr, int nlines);
```
prints lines in `lines_ptr` to the stdio

- [IN] `lines_ptr` : an array of strings(pointers to chars)

- [IN] `nlines` : size of `lines_ptr`


# INTERNAL API 
	
```C
void strcopy( char *s, char *t);
```
copy a string t to s

- [IN] `t` : string to be copied

- [OUT] `s` : the copie of the sting t

	
```C
char *alloc(char *allocbuf[] ,int n);
```
store n elements in `allocbuf`

- return : pointer to the first allocated element 

- [IN] `n` : number of elements to be stored

- [IN-OUT] `allocbuf` : the array where the elements will be stored


	











+ **How to compile code**
```bash
$ gcc -g -Wall sort.c readlines.c -o sortlines
```
