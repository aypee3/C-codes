#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<18;i++)
	{
		for(j=0;j<40;j++)
		{
			printf(" ");
		}
		for(j=1;j<=36;j++)
		{
			if((i>=5 && i<=8 && j>4 && j<13) || (i>=5 && i<=8 && j>24 && j<=32))
			{			
				printf(".");
			}
			else if(i>=12 && i<16 && j>=13 && j<=24)
			{
				printf(" ");
			}
			else
			{
				printf("$");
			}
		}
	printf("\n");
	}
return 0;
}
