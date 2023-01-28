#include<stdio.h>
int main()
{
	int a=10, b=20, d;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	d=b/2;
	printf("%d", d);
return 0;
}
