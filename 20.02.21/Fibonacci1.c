#include<stdio.h>
int main()
{
int n,first=0,second=1,next,c;
printf("enter the number of terms\n");
scanf("%d",&n);

printf("The first %d numbers of fibonacci series are:\n",n);
for(c=0;c<n;c++)	
{
if(c<=1)
next=c;
else
{next=first+second;
first=second;
second=next;
}
printf("%d\t",next);
}
return 0;
}
