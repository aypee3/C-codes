#include<stdio.h>
void swap(int*, int*); // declaration // void means no value is returned
int main() // since this is return type
{
	int a=10, b=20, *p1, *p2;
	p1=&a;
	p2=&b;
	swap(p1,p2);
	printf("hello i am adding function %d , %d \n",a, b); // Now it prints 20, 10 again since local value
	// so we have used here pointers - compare from revision 5.c
	return 0;
}

// declaration // calling // definition in function & meant for reusability

void swap(int *a, int *b) // here int can have any name
{// body of functuion
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("hello i am adding function %d , %d \n",*a, *b);// prints 10, 20
}


