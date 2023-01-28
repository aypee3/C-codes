#include<stdio.h>
int add(int ,int ); // declaration // void means no value is returned
int main() // since this is return type
{

	
	int a=10, b=2, c;
	c=add(a,b);
	printf("hello i am adding function %d \n",c);
	return 0;
}

// declaration // calling // definition in function & meant for reusability

int add(int a, int b) // here int can have any name
{// body of functuion
	printf("hii\n");
	return a+b; // we are using return function and return where its being called
}

//4 types
// 1. no argument and no return type eg argument is the variable we pass
// 2. arguments and no return type 
// 3. no arguments and with return type 
// 4. arguments with return type - upper example is of this type and most commonly used
