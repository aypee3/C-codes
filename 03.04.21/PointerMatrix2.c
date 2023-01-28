#include<stdio.h>
int main()
{
	int matr1[3][3], matr2[3][3], matr3[3][3];
	int *p1,*p2,*p3;
	printf("Enter the values of first 3x3 matrix\n");
		for(p1=&matr1[0][0];p1<=&matr1[2][2];p1++)
			{
				scanf("%d", p1);
				if(*p1==matr1[0][2] || *p1==matr1[1][2] || *p1==matr1[2][2])
				printf("\n");
			}
		
		
		printf("Enter the values of second 3x3 matrix\n");
			for(p2=&matr2[0][0];p2<=&matr2[2][2];p2++)
			{
				scanf("%d", p2);
				if(*p2==matr2[0][2] || *p2==matr2[1][2] || *p2==matr2[2][2])
				printf("\n");
			}


			for(p3=&matr3[0][0], p1=&matr1[0][0], p2=&matr2[0][0];p3<=&matr3[2][2], p1<=&matr1[2][2], p2<=&matr2[2][2];p3++,p1++,p2++)
			{
				*p3=*p1+*p2;
			}
			
	
		printf("The result of matrix addition is :\n");
			for(p3=&matr3[0][0];p3<=&matr3[2][2];p3++)
			{
				printf(" %d\t",*p3);
				if(*p3==matr3[0][2] || *p3==matr3[1][2])
				printf("\n");
			}
		
	return 0;
}
