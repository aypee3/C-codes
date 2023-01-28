#include<stdio.h>
int main()
{
	int i,j,s;
		for(i=1;i<=5;i++)
		{
			for(j=0;j<i;j++)
			{
				printf(" ~ ");
			}
			for(s=1;s<=11-2*i;s++)
			{
				printf(" @ ");
			}
			for(j=0;j<i;j++)
			{
				printf(" ~ ");
			}
			
			printf("\n");
		}
	return 0;
}
