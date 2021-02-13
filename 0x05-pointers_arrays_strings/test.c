#include<stdio.h>

int main()
{
	int n;
	int *p;

	n=98;
	p=&n;
	printf("The value of 'n' : %d\n ", n);
	printf("The address 'n' is: %p\n", &n);
	printf("The value of 'p' is: %p\n ", p);
*p = 100;
	printf("The value of 'n' : %d\n ", n);

	return(0);
}
