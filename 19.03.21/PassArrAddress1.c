#include<stdio.h>
void add(int i)
{
	
    int arr[i];
	for(i=0;i<10;i++)
	{
		printf(" the address of the input is %d\n", &arr[i]);
	}
	
}
int main()
{
	int i=0;
	add(i);
	return 0;
}
