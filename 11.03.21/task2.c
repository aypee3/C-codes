#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
			
		for(j=1;j<=i;j++)
		{
			if(i>2 && j==2 || j==3)
			{			
			
			if(j==2)
			printf("*");
			else if(j==3)		
			printf(" ");
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
