#include<stdio.h>

int main()
{
	int i,j;
	int (*ptr)[3];
	//since pointer is faster than array
	int matr[3][3];	
		
	ptr=matr; // here we can equate address and int type matr
	printf(" enter the elemnts of matrix\n");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(ptr+i)+j)); // here we dont need additional star before ptr
		}
		printf("\n");
		}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t", *(*(ptr+i)+j));
		}
		printf("\n");
	}
	return 0;
}
