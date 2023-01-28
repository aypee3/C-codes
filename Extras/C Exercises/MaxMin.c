#include<stdio.h>
#include<math.h>
int getresult(int arr[], int n)
{
	int min=0;
	int max=0;
	int i;
	if(n==1)
	{
		min=max=arr[0];
	}
	if(arr[0]>arr[1])
	{
		max=arr[0];
		min=arr[1];
	}
	else
	{
		max=arr[1];
		min=arr[0];
	}
	for(i=2;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		else if(arr[i]<min)
		{
			min= arr[i];
		}
	}
	printf("Maximum element is: %d\n",max);
	printf("Minimum element is: %d\n",min);
}

int main()
{
	int arr[]={200,191,112,-11,330,60};
	int n=6;
	getresult(arr,n);
}

