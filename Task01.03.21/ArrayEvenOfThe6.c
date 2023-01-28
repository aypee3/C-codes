#include<stdio.h>
int main()
{
    int n[6],i;
    printf("Enter the 6 numbers\n",n);
    for(i=0;i<6;i++)
    {
    scanf("%d", &n[i]);
	}
		printf("The even numbers are:\n");
		for(i=0;i<6;i++)
		{
			if(n[i]%2==0)
			{
			printf("%d\t", n[i],"\n");
			}
		}
    return 0;
}
