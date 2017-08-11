#include<stdio.h>

int strlen(const char s[])
{
	int i;
	while (s[i] != '\0'){
		++i;
		s[i] = '4';
	}
	return i;
}


