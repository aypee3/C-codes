#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
		printf(" ");
		}
		for(j=i;j<10;j++)
		{
		printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
