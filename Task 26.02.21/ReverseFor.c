#include<stdio.h>
int main()
{
   int i,s=0,n;
   printf("Enter the number to reverse\n");
   scanf("%d", &n);
		    for(i=n;i>0;)
			{
		    s=(s*10)+(i%10);
			i=i/10;	
			}
			printf("The reverse number is: %d",s);
		    
	
    return 0;
}
