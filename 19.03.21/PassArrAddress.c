#include<stdio.h>
void add()
{
	int arr[10]={4,3,2,1,0,9,8,7,5,6};// or we can write arr[10]; only
	int i;
	for(i=0;i<10;i++)
	{
		printf(" the address of the input is%d\n", &arr[i]);
	}
	
}
int main()
{
	add();
	return 0;
}
