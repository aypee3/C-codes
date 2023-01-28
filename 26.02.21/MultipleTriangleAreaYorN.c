#include<stdio.h>
int main()
{
    int b,h;
    char ch='y';
	float area;
    do
	{
		if(ch=='n' || ch=='N')		
		{
		printf("Thank You for using program\n");
		break;
		}
	else if (ch=='y' || ch=='Y')
		{
		printf("enter the value of base and height:\n");
		scanf("%d%d",&b,&h);
		area=(b*h)/2.0;
		printf("Area of the triangle is(in square units):%.2f\n",area);
		printf("Do you want to continue? y/n:");
		fflush(stdin);
		scanf("%c", &ch);
		fflush(stdin);
		}
	else
		{
		printf("invalid choice\n");
		printf("Do you want to continue? y/n:");
		fflush(stdin);
		scanf("%c", &ch);
		fflush(stdin);
		}
	}
	while(1);
    return 0;
}
