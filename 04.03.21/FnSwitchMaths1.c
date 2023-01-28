	
#include<stdio.h>
#include<math.h>
void f1()
{
	int x,y,p1;
	printf("enter the value of x and y:\n");
	scanf("%d%d", &x,&y);
	p1=pow(x,y);
	printf("power of x^y is %d",p1);
}

void f2()
{
	int x,y;
	float s1,s2;
	printf("enter the value of x and y:\n");
	scanf("%d%d", &x,&y);
	s1=sqrt(x);
	s2=sqrt(y);
	printf("square root\t of x is = %.2f and,\n\t\t of y is = %.2f",s1,s2 );
}

main()
{
	printf("Select the menu number from the list:-\n 1.power\n 2.square root\n 3.exit\n\n");
	
	int s;
	scanf("%d", &s);
	switch(s)
	{
		case 1: f1();
			break;
			
		case 2: f2();
			break;	
			
		case 3:
			return 0;
			break;
			
	}
}

		
		
	



