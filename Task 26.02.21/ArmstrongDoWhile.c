#include<stdio.h>
#include<math.h>
int main()
{
   int s=0,n,r,t,x=0;
   printf("Enter to check the armstrong number \n");
   scanf("%d", &n);
   t=n;
		    do
		    {
			x=x+1;
			t=t/10;	
			}
			while(t!=0);
			t=n;
		    do
			{
			r=t%10;
		    s=s+pow(r,x);
			t=t/10;	
			}
			while(t>0);
			printf("The sum of power of digits is: %d\n",s);
			    if(s==n)
				{
				printf("This is an armstrong number");
				}
				else
				{
				printf("This is not an armstrong number");
				}
    return 0;
}
