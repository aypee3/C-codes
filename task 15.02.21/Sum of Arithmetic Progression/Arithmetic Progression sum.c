#include<stdio.h>
#include<math.h>

int main()

{
	printf("Sum of the Arithmetic Progression\n");
	
	int a,n,d,i,tn, sum=0;
	
	printf("Enter the first term:\n");
	scanf("%d", &a);
	
	printf("Enter the total number of terms to be added:\n");
	scanf("%d", &n);
	
	printf("Enter the common difference \n");
	scanf("%d", &d);
	
	sum = (n*(2*a+(n-1)*d))/2;
	tn = a+(n-1)*d;
	i =a;
	printf("\n The sum of the Arithmetic Progression is: ");
	//for (i=a; i<=tn; i=i+d)
	while(i<=tn)
	{
	
		if (i!=tn)
		printf("%d + ", i);
		else
		printf("%d = %d", i, sum);
		i = i+d;
		
}
	
	
	printf("\n");
	
	return 0;	
	
}
