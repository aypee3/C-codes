#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
			
		for(j=1;j<=i;j++)
		{
			if(i>2 && j>1 && j<4)
			{			
				printf("* ");
			}
			else 
			{			
				printf("%c ",j+64);
			}
		}
			printf("\n");
	}
return 0;
}
