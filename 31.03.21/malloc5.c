#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	printf("the size of arr is %d\n", sizeof(arr));
	arr=(int*)malloc(15 * sizeof(int)); 
	// or arr=malloc(15*sizeof(int));
	
	*(arr+0)=60;
	*(arr+1)=70;
	*(arr+2)=80;
	

	printf("the size is %d\n",*(arr+0));
	printf("the size is %d\n",*(arr+1));
	printf("the size is %d\n", *(arr+2));

	return 0;
}
