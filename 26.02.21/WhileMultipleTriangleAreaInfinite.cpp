#include<stdio.h>
int main()
{
    int b,h;
    char ch;
	float area;
    do
	{
		printf("enter the value of base and height:\n");
		scanf("%d%d",&b,&h);
		area=(b*h)/2.0;
		printf("Area of the triangle is(in square units):%.2f\n",area);
	}
	 while(1);
	 
    return 0;
}
