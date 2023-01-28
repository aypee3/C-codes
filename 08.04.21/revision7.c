#include<stdio.h>
int swap(int a);
int main() // since this is return type
{
	int a;
	printf("Enter the value of a\n", a);
	scanf("%d", &a);
	swap(a);
	printf("\nthe value is %d\t", a);
	return 0;
}

// declaration // calling // definition in function & meant for reusability

int swap(int a) // here int can have any name
{// body of functuion

//	printf("%d, ", a);
//	if (a<50)
//	{
//	swap(a+2);
// 	}
// 	or,
 		if (a>30)
 		return 0;
 	printf("%d, ", a);
	swap(a+2);
 	
}


