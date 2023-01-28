#include<stdio.h>
int add(); // declaration // void means no value is returned
int main()// since there is return type function
{

	add(); // calling 
		printf("hello i am adding function %d \n", add());
	return 0;
}

// declaration // calling // definition in function & meant for reusability

int add(int a, int b) // here int can have any name
{// body of functuion
	a=10, b=20;
	return a+b; // we are using return function and return where its being called
}

//4 types
// 1. no argument and no return type eg argument is the variable we pass
// 2. arguments and no return type 
// 3. no arguments and with return type - upper example is of this type
// 4. arguments with return type
