/*#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	printf("Enter the characters to count the size:\n");
	fgets(arr,100,stdin);
	printf("The total character count is:\n %d", strlen(arr));
	return 0;
}*/

#include<stdio.h>
int main()
{
	char arr[100];
	int i=0,count=0;
	printf("Enter the characters to count the size:\n");
	scanf("%[^\n]s", arr);
	for(i=0;arr[i]!='\0';i++);
	printf("The total character count is:\n %d",i);
	return 0;
}
