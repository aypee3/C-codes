#include<stdio.h>
void table(int i)
{
	
	int j;
	for(j=1;j<=10;j++)
	{
		if(j==10)
		{
			printf("\t%d x %d = %9d\t\n", i,j,i*j);
		}
		else
		{
			printf("\t%d x %d = %10d\t\n", i,j,i*j);
		}
	}
	
}
int main()
{
	int i;
	for(i=1;i<21;i++)
	{
		printf("\n---------------------------\n");
		printf("The table of %d is as follows--\n\n",i);
		table(i);
		printf("\n---------------------------\n\n");
	}
	
	return 0;
}
