#include <stdio.h>
#include <stdlib.h>

//finding sum of all elements in an array using pointer

int main() {
	
	int A[50], i, n, *p, total=0;
	
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
		total+=*p;
		p++;
	}
	
	printf("Sum of all elements : %d",total);
	
	return 0;
}
