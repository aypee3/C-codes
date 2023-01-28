#include <stdio.h>
#include<string.h>
void main() 
{
   char str[100]; 
   char pos[10];// char *pos; doesn't work on this computer
       printf("\n\nExtract a substring from a given string:\n");
       printf("--------------------------------------------\n");  
 
       printf("Input the string : ");
	   gets(str);
	   printf("Input the position to start extraction :");
	   gets(pos);
	
	  
	   printf("The substring retrieve from the string is : \" %s \" \n\n",  strstr(str,pos));
 
}
