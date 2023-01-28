#include<stdio.h>
int main()
{
int n,first=0,second=1,next,c;
printf("enter the number of terms\n");
scanf("%d",&n);
printf("The first %d numbers of fibonacci series are:\n",n);
if(n<=0)
{printf("invalid list size\n");}
else if(n==1)
{printf("%d",first);
}
for(c=0;c<n-1;c++)
{next=first+second;
first=second;
second=next;
printf("%d\t",next);
}
return 0;
}
