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
		for(j=0;j<=3;j++)
		{
		printf(" %d",j);
		}
	
		printf("\n");
	}
		for(i=0;i<3;i++)
	{
		for(j=1;j<=20;j++)
		{
		printf(" %d",j);
		}
		printf("\n");
	}
		for(i=0;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		
		}
		for(j=0;j<=3;j++)
		{
		printf(" %d",j);
		}
	
		printf("\n");
	}
	return 0;
}
