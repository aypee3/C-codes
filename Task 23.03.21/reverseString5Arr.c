#include<stdio.h>
int main()
{
	int size,start;
	char name[]="APURVA";
	for(size=0;name[size]!='\0';size++);
	printf("the size is %d\n", size);
	char name2[size];
	for(size-1,start=0;size>0;size--)
	name2[start++]=name[size-1];
	name2[start]='\0';
	printf("the reverse name is %s \n", name2);
	
	return 0;
}
