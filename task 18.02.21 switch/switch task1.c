#include<stdio.h>
int main()
{

	int x,y,a,s,m;
	float d;
	char choice;
	printf("enter operation choice +,-,*,/, \n");
	scanf("%c",&choice);
/*	a=x+y;
	s=x-y;
	m=x*y;
	d=x/(float) y;*/
	switch (choice)
	{
		case'+':	printf("enter two numbers\n");
		scanf("%d %d", &x, &y);
		printf("adding two nos.:\n %d+%d = %d\n",x,y,x+y);
		break;	
		case'-':printf("enter two numbers\n");
		scanf("%d %d", &x, &y);
		printf("subtracting two nos.:\n %d-%d = %d\n",x,y,x-y);	// we can use s instead of x-y //
		break;
		case'*':printf("enter two numbers\n");
		scanf("%d %d", &x, &y);
		printf("multiplying two nos.:\n %d*%d = %d\n",x,y,x*y);	// we can use m instead of x*y //
		break;
		case'/':printf("enter two numbers\n");
		scanf("%d %d", &x, &y);
		printf("dividing two nos.:\n %d/%d = %0.2f\n",x,y,x/(float) y);	// we can use d instead of x/(float) y //
		break;
		default:printf("it is out of syllabus.\n");	
		break;				
	}
	return 0;
	
}
