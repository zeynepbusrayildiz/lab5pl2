#include <stdio.h>
#include <stdlib.h>

//swapping two numbers using pointer

int main() {
	int a, b, *x, *y, temp;
	
	printf("Please enter the first number: ");
	scanf("%d",&a);
	
	printf("Please enter the second number: ");
	scanf("%d",&b);
	
	temp=a;
	x=&a;
	y=&b;
	
	printf("Values before swapping: a=%d b=%d\n",a,b);
	
	*x=b;
	*y=temp;
	
	printf("Values after swapping: a=%d b=%d",a,b);
	
	return 0;
}
