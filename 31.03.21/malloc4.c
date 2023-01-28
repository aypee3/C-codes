#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=malloc(15 *sizeof(int));
	if(ptr!=NULL)
	{
	//	*(ptr+5)= 450;
		printf("value of 6th integer is %d", *(ptr+5));
	}
}
