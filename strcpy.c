#include<stdio.h>

void strcpy(char *s, char *t);

int main(){
		
		char p[] = "now it's time";
		char r[] ="pffffff";
		
		strcpy(r, p);
	
	
		printf("%s", r);
	





	return 0;
}

void strcpy(char *s, char *t){

	while(*s++ = *t++)
	;

}
