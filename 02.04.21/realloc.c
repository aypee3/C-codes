#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,*ptr1,count=5
	;
	ptr = (int *) malloc(sizeof(int));
	ptr1 = (int *) realloc(ptr, count * sizeof(int));
	
	if(ptr1 == NULL)
		{           //reallocated pointer ptr1
	    printf("Exiting!!\n");
	    free(ptr);
	    exit(0);
		}
	else
		{
	    free(ptr);          //to deallocate the previous memory block pointed by ptr so as not to leave orphaned blocks of memory when ptr=ptr1 executes and ptr moves on to another block
	    ptr = ptr1;         //deallocation using free has been done assuming that ptr and ptr1 do not point to the same address                     
		}
		
	}
