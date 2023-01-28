#include<stdio.h>
struct  emp // can be made in some other file on desktop or at same address
{
	int empid;
	char gender;
	char name[20]; // c doesn't have any string data type so use char array
	// can store upto 20 characters
	float salary;
}e1,e2;
// heterogenous mixture of data
int main()
{
	printf("Enter the id of employee\n");
	scanf("%d", &e1.empid); // e1.empid - dot is calling operator
	fflush(stdin);
	printf("Enter the name of employee\n");
	gets(e1.name);
	// or scanf("%[^\n]s", &e1.name);

	printf("The employee name is %s\n", e1.name);
	printf("The employee id is %d\n", e1.empid);
	return 0;
}
