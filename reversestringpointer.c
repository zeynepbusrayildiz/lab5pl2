#include <stdio.h>
#include <stdlib.h>

//  reverse string using pointer

int main() {
	char S1[100], *p;
	
	printf("Please write something : ");
	gets(S1);
	
	int l=0;
	
	p=&S1[0];
	
	while(*p!='\0'){
		l++;
		p++;
	}
	
	p--;
	
	while(p>=S1){
		printf("%c",*p);
		p--;
	}
	
	return 0;
}
