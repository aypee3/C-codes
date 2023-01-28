#include<stdio.h>
main()
{
	int i,s,d,n, value=1;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		for(s=i;s<=20;s++)
		{
		printf(" ");
		}
		
		for(d=1;d<=i;d++)
		{
		printf("%d ",value);
		value++;	
		}
		printf("\n");
	}
}
