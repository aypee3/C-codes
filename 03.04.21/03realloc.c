#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,*new_ptr,i;
	ptr=(int*)malloc(3*sizeof(int));
	//int arr[]={10,20,30};

	
	for(i=0;i<3;i++)
	{
		*(ptr+i)=i+10;
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	printf("-------------------------\n");
	
	new_ptr=(int*)realloc(ptr,4*sizeof(int)); // use malloc before it and used to dynamically allocate memory here to ptr and store in new_ptr
	*(new_ptr+3)=40; // or  *(ptr +3)=40;
		for(i=0;i<4;i++)
		{
		printf("%d\n",*(new_ptr+i));
		}
	printf("-------------------------\n");
	
		for(i=0;i<4;i++)
		{
		printf("%d\n",*(ptr+i));
		}
	
	
	return 0;
}
