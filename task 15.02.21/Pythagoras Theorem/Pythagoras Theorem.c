#include<stdio.h>
#include<math.h>

int main()

{
printf("The measure of hypotenuse is\n");

	int a,b,c;
	float d;
	
	printf("Enter the value of first side of the right trianle\n");
	scanf("%d", &a);
	
	printf("Enter the value of the second side of the right triangle\n");
	scanf("%d", &b);
	
	c= a*a + b*b ;
	d = sqrt(c);
	
	printf("The hypotenuse measures : %0.2f\n", d);
	
	return 0;
	
}
