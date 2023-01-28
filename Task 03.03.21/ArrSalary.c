#include<stdio.h>
main()
{
	int i[3][3];
	int l,k;
	for(l=1;l<=3;l++)
	{
		printf("emp %d\n",l);
		for(k=1;k<=3;k++)
		{
			printf("enter %d number of month salary",k);
			scanf("%d", &i[l][k]);
			printf("\n");
		}
			printf("\n");
	}
	int sum1;
	for(l=1;l<=3;l++)
	{
		sum1=0;
		for(k=1;k<=3;k++)
		{
			sum1+=i[l][k];
			printf(" %d", i[l][k]);
			printf("\t and total of emp %d salary is %d\n\n",l,sum1);
		}
	
	}
		return 0;
	}
