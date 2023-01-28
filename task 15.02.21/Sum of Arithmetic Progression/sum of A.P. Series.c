#include<stdio.h>

int main()

{
	printf("Sum of the Arithmetic Progression\n");
	
	int a,n,d,i, value;
	int sum =0;
	
	prinf("Enter the first term:\n");
	scanf("%d", &a);
	
	printf("Enter the total number of terms to be added:\n");
	scanf("%d", &n);
	
	printf("Enter the common difference \n");
	scanf("%d", &d);
	
	value = a;
	printf("\n A.P. Series :");
	for (i=0; i<n; i++)
	
	{
		printf("%d + ", value);
		sum = sum + value;
		value = value + d;
			
	}

	printf("\n The Sum of A.P.Series until %d\n", n, sum);
	
	return 0;	
	
}
