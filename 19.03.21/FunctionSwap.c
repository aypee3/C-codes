#include<stdio.h>
void sw(int a, int b)
{
int t;
	t=a;
	a=b;
	b=t;
	printf("the value of new a is: %d\n", a );
	printf("the value of new b is : %d\n\n", b);
//	if we write return a,b - we can't return 2 values
}
int main()
{
	int a,b;
	printf("Enter the two numbers a and b to swap\n");
	scanf("%d%d", &a, &b);
	sw(a,b);// sends only a copy
	// we cant write int result=sw(a,b)
	printf("the value of old a is: %d\n", a );//the old value remains same as stored before
	printf("the value of old b is : %d\n", b);
	return 0;
}

