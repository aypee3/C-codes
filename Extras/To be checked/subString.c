#include<stdio.h>
#include<string.h>
int main()
{
//	char name[]="Hello my name is Aman";
	char *name2="name is Aman";
	char *str;
	char *store;
	// int num;
	printf("Enter the characters\n");
	scanf("%[^\n]s",str);// or gets(str);
	// we cant write gets(num); as gets takes only string values
	//fflush(stdin);
	store=strstr(name2,str);
	printf("hii");
	printf("the substring is\" %s \" \n",store);
	return 0;
}

