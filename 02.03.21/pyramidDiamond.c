#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
		printf(" ");
		}
		for(j=0;j<=i;j++)
		{
		printf(" %d",j);
		}
		printf("\n");
	}
		for(i=10;i>0;i--)
	{
		for(j=i;j<=10;j++)
		{
		printf(" ");
		}
		for(j=0;j<i;j++)
		{
		printf(" %d",j);
		}
		printf("\n");
	}
	return 0;
}
