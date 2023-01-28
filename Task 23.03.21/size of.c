#include<stdio.h>
int main()
{
	int size;
	char name[]="APURVA";
	for(size=0;name[size]!='\0';size++);
	printf("the size is %d\n\n", size);// peints the total size of characters
	printf("the sizeof is %d\n", sizeof(name));// sizeof reads how much MEMORY size is being used and reads null in the end also
	return 0;
}
