#include<stdio.h>
int main()
{
    int n[5],i;
    printf("Enter the 5 salaries(in Rs)\n",n);
    for(i=0;i<5;i++)
    {
    printf("Salary - %d : ",i+1);
    scanf("%d", &n[i]);
	}
	
		for(i=0;i<5;i++)
		{
			if(n[0]<n[i])
			n[0]=n[i];
		}
		printf("The highest of the given 5 salaries is:\n%d",n[0]);	
    return 0;
}