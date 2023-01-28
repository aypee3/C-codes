#include<stdio.h>
int main()
{
	int *ptr,*ptr1;
	int var=50,a;
	ptr1=&a;
	printf("Enter the value of a\n");
	scanf("%d", ptr1);
	
	printf("the value of var is %d \n", var); //50
	printf("the address of var is %d\n", var); // eg. 6684188
	//  eg. %d or %f is data specifier

	ptr=&var;
	int **ptr2;
	ptr2=&ptr;
	// &(Ampersand) -> address of
	// *(Asterix) -> value at address
	printf("the value in ptr pointer is %u \n ", ptr);
	printf("the value at address in ptr pointer is %u, %d \n ", *(&var), a);
	printf("the value at address in ptr2 pointer is %u \n ", *ptr2);
	return 0;
}

