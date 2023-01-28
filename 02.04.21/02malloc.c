#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr2,i;
	ptr2=malloc(2*sizeof(int)); //i/e/ 4x4 = 16 bytes
	if(ptr2==NULL)
	{
		printf(" unable to allocate memory");
		exit(0); // terminates the whole program(unlike break where the lower program can run as it was unsuccessful
	}
	// ptr=5676; // treats as address
	//ptr=&var; //treats as address
	//*ptr=30; //treats as value at address
/*	
	*ptr2=50; // compiler reads as *(ptr2+0)
	*/
//	printf("the address of ptr2 is %d\n",ptr2);
//	printf("the address of ptr2 is %d\n",ptr2+1);// takes difference of four
	for(i=0;i<=4;i++)
	{
		printf("enter the %dth value\n",i+1);
		//scanf("%d", &*(ptr2+i));
		scanf("%d", ptr2+i);
	}
		printf("\n\n");
		
		//free(ptr2);// to remove whole stored memory
		
		ptr2=realloc(ptr2,5*sizeof(int)); //reallocates memory after erasing previous memory
		for(i=0;i<5;i++)
		{
		printf("enter the %dth value\n",i+1);
		//scanf("%d", &*(ptr2+i));
		scanf("%d", ptr2+i);
		}
		for(i=0;i<5;i++)
		{
			printf("the value at array %dth position is %d\n",i+1,*(ptr2+i));
		}
	//printf("the value at array ptr2's 0th position is %d\n", *ptr2);
	//free(ptr2);// deallocate memory
		return 0;
}
