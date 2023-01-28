#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=i;j<20;j++)
		{
			printf(" ");
		
		}
		for(j=0;j<=i;j++)
		{
		printf(" %d",j);
		}
	
		printf("\n");
	}
	return 0;
}
