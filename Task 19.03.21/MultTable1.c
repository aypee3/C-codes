#include<stdio.h>
int main()
{
 int n,i,j;
 printf("Enter how many tables did you want :");
 scanf("%d",&n);
 printf("\n");
 for(i=1;i<=n;i++)
 {
   printf("the table of %d is -\n\n",i);
   for(j=1;j<=10;j++)
   {
   	if(j==5)
   	{
   	printf("%d x %d = %d\n\n",i,j,i*j);
    }
   	else if(j==1)
   	{
   	printf("  %d x %d = %d... ",i,j,i*j);	
	   
	}
	else
    printf("%d x %d = %d...  ",i,j,i*j);

   }
   printf("\n________________________________________________________________________________________________\n\n");
 }
 return 0;
 }
