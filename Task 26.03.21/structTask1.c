#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	float salary;
	char name[20];
	struct location
	{
		char area[20];
		char city[20];
		char state[20];
	}addr;
};

int main()
{
	struct employee emp[5];
	int i;
	printf("The record of the 5 employees are:\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter the name of the no. %d employee\n",i+1);
		scanf("%s", &emp[i].name);
		fflush(stdin);
		
		printf("Enter the ID of the no. %d employee\n",i+1);
		scanf("%d", &emp[i].id);
		fflush(stdin);
		
		printf("Enter the address of the no. %d employee\n",i+1);
		scanf("%s", &emp[i].addr.area);
		fflush(stdin);
		
		printf("Enter the city of the no. %d employee\n",i+1);
		scanf("%s", &emp[i].addr.city);
		fflush(stdin);
		
		printf("Enter the state of the no. %d employee\n",i+1);
		scanf("%s", &emp[i].addr.state);
		fflush(stdin);
		
		printf("Enter the salary of the no. %d employee\n",i+1);
		scanf("%f", &emp[i].salary);
		fflush(stdin);
		
	}
	fflush(stdin);
	for(i=0;i<5;i++)
	{
		printf("For the %d employee %s with ID-%d and address--%s, %s, %s,\n", i+1,emp[i].name, emp[i].id, emp[i].addr.area, emp[i].addr.city, emp[i].addr.state);
		printf("The salary is %0.2f\n\n",emp[i].salary);
	}
	return 0;
}
