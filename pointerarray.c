#include <stdio.h>
#include <stdlib.h>

//array ve pointer iliþkisi

int main() {
	int A[50], i, n, *p;
	
	printf("Please enter the size of array :");
	scanf("%d",&n);
	
	p=&A[0];
	
	for(i=0; i<n; i++){
		printf("Enter element %d :\n",i+1);
		scanf("%d",p);
		p++;
	}
	
	p=&A[0];
	
	for(i=0; i<n; i++){
		printf("%d ",*p);
		p++;
	}
	
	return 0;
}
