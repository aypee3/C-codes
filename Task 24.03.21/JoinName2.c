#include<stdio.h>
int main()
{
	char first[100];
	char second[100];
	int i,j;
	printf("Enter the first name\n");
	scanf("%s",&first);
	printf("Enter the last name\n");
	scanf("%s",&second);
	
	for(i=0;first[i]!='\0';i++);
	first[i]=' ';
	for(j=0;second[j]!='\0';j++,i++)
	{
		first[i+1]=second[j];
	}
	first[i+1]='\0';
	printf("The full name is\n %s",first);
	return 0;
}
	
