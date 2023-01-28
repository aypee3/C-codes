#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g;
	float percent;
	printf("Enter the 7 subjects marks\n");
	scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
	
	percent =(a+b+c+d+e+f+g)*100/70.0;
	printf("Percentage = %0.2f\n",percent);
	
	if(percent<=0 || percent>100)
	{
	printf(" Invalid Grade 2");
	}
	else if (percent>=85 && percent<=100)
	{
		printf("A - Grade");
		
	}
	
	else if (percent>=70 && percent<85)
	{
		printf("B - Grade");
	}
	else if (percent>50 && percent<=70)
	{
		printf("c - Grade");
	
	}
	else if (percent<=50 && percent>0)
	{
		printf("FAIL");
	}
	else
	{
		printf("Invalid Grade");
	}
	
	return 0;
}
