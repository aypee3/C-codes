#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of rows:\n");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<=20;j++)
		{
		printf(" ");
		}
		
		for(j=0;j<=i;j++)
		{
		printf("* ");
		}
	
		printf("\n");
	}
	return 0;
}
