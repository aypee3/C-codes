#include<stdio.h>
#include<math.h>
int main()
{
   int s=0,n,r,t,x=0;
   printf("Enter to check the armstrong number \n");
   scanf("%d", &n);
   
		    for(t=n;t!=0;)
		    {
			x=x+1;
			t=t/10;	
			}
			
		    for(t=n;t>0;)
			{
			r=t%10;
		    s=s+pow(r,x);
			t=t/10;	
			}
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
