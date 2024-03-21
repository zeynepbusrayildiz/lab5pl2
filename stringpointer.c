#include <stdio.h>
#include <stdlib.h>

//finding the length of a string using pointer

int main() {
	
	char S[100], *p;
	int l=0;
	
	printf("Please write something :");
	gets(S);
	
	p=&S[0];
	
	while(*p!='\0'){
		l++;
		p++;
	}
	
	printf("The length of the string is %d",l);
	
	return 0;
}
