#include<stdio.h>
int main()
{
   int r=0,n;
   printf("Enter the number to reverse\n");
   scanf("%d", &n);
		    while(n>0)
			{
		    r=(r*10)+(n%10);
			n=n/10;	
			}
			printf("The reverse number is: %d",r);
		    
	
    return 0;
}
