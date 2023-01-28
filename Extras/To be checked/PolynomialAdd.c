#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i,m,n,cnt=0;

	for(i=0;i<=9;i++)
	a[i]=0;
	
	for(i=0;i<=9;i++)
	b[i]=0;
	
	printf("enter the order of first polynomial");
	scanf("%d", &m);
	printf("enter the coefficient");
	for(i=m;i>0;i--)
	{
		scanf("%d",a[i]);
	}
	printf("enter the order of second polynomial");
	scanf("%d", &n);
	for(i=n;i>0;i--);
	{
		scanf("%d", &b[i]);
	}
	if(m>=n)
	{
		for(i=m;i>=0;i--)
		{
			c[i]=a[i]+b[i];
			cnt++;
		}
	}
	else
	{
		for(i=n;i>=0;i--)
		{
			c[i]=a[i]+b[i];
		}
	}
	printf("\n\nResultant Polynomial is:A=");
	for(i=cnt-1;i>0;i--)
	{
		printf("%dX^%d+",c[i],i);
	}
	printf("%d",c[i]);
}
