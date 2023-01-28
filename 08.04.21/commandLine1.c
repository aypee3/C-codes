#include<stdio.h>
// doesn't work with devcpp
int main(int argc, char *argv[])// commandline arguments
// main takes only 2 arguments - one int and one char
{
	printf("the number of characters is %d\n", argc);

	int i;
	for(i=0;i<argc;i++)
	{
		printf("the value at given %d position is %s \n", argc,argv[i]);
	 } 
	 //argc = total number of 
	 return 0;
}
//in print out at position 0 only program path and name is printed