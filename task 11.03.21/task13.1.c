#include<stdio.h>
int main()
{
	int i,j,t=5;
	
	for(i=1;i<=5;i++)
	{	
		for(j=1;j<t;j++)
		{			
		 printf(" ");
		}
		t--;
	    for(j=0;j<2*i-1;j++)
		{			
			printf("*");
		}
		printf("\n");	
	}
return 0;
}

