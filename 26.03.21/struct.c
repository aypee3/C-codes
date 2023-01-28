#include<stdio.h>
struct employee
{
	int empid;
	char gender;
	float salary;
};
struct employee aman;

int main()
{
	printf("Enter the empid\n");
	scanf("%d", &aman.empid);
	fflush(stdin);
	printf("Enter the gender\n");
	scanf("%c", &aman.gender);
	printf("Enter the salary\n");
	scanf("%f", &aman.salary);
	
	printf("The data of Aman:\n empid=%d\n gender=%c\n salary=%0.2f", aman.empid, aman.gender, aman.salary);
	//printf("The data of Aman\n salary=%0.2f",aman.salary);
	
	return 0;
}
