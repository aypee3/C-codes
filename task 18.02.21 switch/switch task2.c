#include<stdio.h>
int main()
{
	int a,b;
	int op;
	printf(" Choices available\n 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n\n");
	printf("Enter the values of a and b:\n ");
	scanf("%d%d", &a, &b);
	printf("Enter your choice:\n");
	scanf("%d", &op);
	switch (op)	
	{
	case 1 :
		printf("Sum of %d and %d = %d", a,b,a+b);
		break;
	case 2 :
		printf("Subtraction of %d and %d = %d", a,b,a-b);
		break;
	case 3 :
		printf("Multiplication of %d and %d = %d", a,b,a*b);
		break;
	case 4 :
		printf("Division of %d and %d = %0.2f", a,b,a/(float)b);
		break;
	default :
		printf("Please enter your correct choice");
		break; // break is not required here //
	}
	
	return 0;
}
