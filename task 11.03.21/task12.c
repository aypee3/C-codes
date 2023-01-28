#include<stdio.h>
int main()
{
	int i,j;
		for(i=0;i<5;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(i>2 && j>0 && j<3)
					printf("*");
				else
					printf("%c",j+65);
			}
			printf("\n");
		}
		return 0;
}
