#include<stdio.h>

int main()
{
	int a,b, result;
	printf ("Enter the value of a:\n");
	scanf("%d", &a);
	
	printf("Enter the value of b:\n");
	scanf("%d", &b);
	
	result = (a*a) + (b*b) + (2*a*b);
	
	printf("The value of a+b whole square is =%d\n", result);
	
	return 0;	
	
	
}
