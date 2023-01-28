#include<stdio.h>
#include<stdlib.h>
int main()
{
	char sentence[100];
	FILE *fptr;
//	fptr=fopen("program.txt", "w"); // to write by replacing
	fptr=fopen("program.txt","a");// to append
	printf("\n\t Enter the sentence\n:", sentence);
	gets(sentence);
	fprintf(fptr,"the sentence is :\t %s\n",sentence);
	fclose(fptr);
	
	return 0;
}
