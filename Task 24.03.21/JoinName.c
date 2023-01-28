#include<stdio.h>
int main()
{
	char first[100];
	char second[100];
	char gap=' ';
	char full[100];
	int i,j;
	printf("Enter the first name\n");
	scanf("%s",&first);
	printf("Enter the last name\n");
	scanf("%99s",&second);
	
	for(i=0,j=0;first[i]!='\0';i++,j++)
	{
		full[j]=first[i];
	}
	full[j]=' ';
	
	
	for(i=0;second[i]!='\0';i++,j++)
	{
		full[j+1]=second[i];
	}
	full[j+1]='\0';
	
	printf("The full name is :\n %s",full);
	
	return 0;
}
