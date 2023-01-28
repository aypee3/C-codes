#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,s;
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=(5-i);j++)
			{
				printf(" ");
			}
			for(s=1;s<=(2*i-1);s++)
			{
				printf("*");
			}
			printf("\n");
		}
	return 0;
}
