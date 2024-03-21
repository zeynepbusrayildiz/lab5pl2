#include <stdio.h>
#include <stdlib.h>

//sum of numbers using pointers

int main() {
	int a ,b, *p1, *p2;
	printf("Please enter 1st number:");
	scanf("%d",&a);
	printf("Please enter 2nd number:");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	*p1+=*p2;
	printf("Sum of the numbers : %d",*p1);
	return 0;
}
