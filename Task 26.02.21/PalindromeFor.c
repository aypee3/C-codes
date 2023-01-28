#include<stdio.h>
int main()
{
	int r=0,n,i,t;
	printf("Enter the number to check palindrome:\n");
	scanf("%d", &n);
	t=n;
	for(i=t;t>0;)
	{
	r=(r*10)+(t%10);
	t=t/10;
	}
		printf("The reverse is: %d\n",r);
	
		if(r==n)
		
		printf("This is a palindrome number");
		
		
		else
		
		printf("This is a not palindrome number");
		
		return 0;
}
