#include<stdio.h>
int main()
{
	char name[30];
	int i;
	printf("Enter the name: \n");
	for(i=0;i<30;i++)
	{
		scanf("%c", &name[i]);
	}
	
	printf("The name is: \n");
	
	for(i=0;i<30;i++)
	{
		printf("%c",name[i]);
	}
	
	return 0;
}
