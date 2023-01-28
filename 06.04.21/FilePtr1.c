#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char ch;
	//fptr=fopen("write.txt", "r"); // Open file in reading Mode (since we have not given any path so by default store in same folder
	// otherwise specify path eg.
	fptr=fopen("C:/Users/aypee/Desktop/Demo.txt", "r"); // if we have a Demo.txt  with some dats on desktop
	if(fptr==NULL)
	{
		printf(" Error! unable to open file\n");
		exit(1);
	}
	
	while(1) // Infinite while Loop
	{
		ch=fgetc(fptr);
		if(ch==EOF) //End of File is a value and not a function
		{
			break;
		}
		printf("%c",ch);
	}
	fclose(fptr);
	return 0;
}

