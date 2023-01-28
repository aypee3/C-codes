#include<stdio.h>
void add(); // declaration // void means no value is returned
int main()
{
	add(); // calling & passing the argument here its "pass by value" sends only copy
	add(); // calling
	
	return 0;
}

// declaration // calling // definition in function & meant for reusability

void add() // here int can have any name
{// body of functuion
	printf("hello i am adding function");
}

//4 types
// 1. no argument and no return type eg argument is the variable we pass - upper example is of this type
// 2. arguments and no return type
// 3. no arguments and with return type
// 4. arguments with return type
