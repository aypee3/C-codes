#include<stdio.h>
int main()
{
	int i;
	char alph[100];
	printf("Enter the alphabets\n");
	scanf("%[^\n]s", &alph);
	for(i=0;alph[i]!='\0';i++)
	{
		if(alph[i]>64 && alph[i]<91)
		// OR if(alph[i]>'A' && alph[i]<'Z')
				alph[i]=alph[i]+32;
	}
	printf("The lower case is %s",alph);
	
}
