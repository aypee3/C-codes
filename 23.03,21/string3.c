#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter the name\n");
	fgets(name,20,stdin);
	printf("\n\nThe name is:\n");
	fputs(name,stdout);
	return 0;
}
