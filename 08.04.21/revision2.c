#include<stdio.h>
void add(); // declaration // void means no value is returned
int main()
{
	int a=10, b=20;
	add(a,b); // calling 
	
	return 0;
}

// declaration // calling // definition in function & meant for reusability

void add(int a, int b) // here int can have any name
{// body of functuion
	printf("hello i am adding function %d + %d = %d", a,b, a+b);
}

//4 types
// 1. no argument and no return type eg argument is the variable we pass
// 2. arguments and no return type - upper example is of this type
// 3. no arguments and with return type
// 4. arguments with return type
