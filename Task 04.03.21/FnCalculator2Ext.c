	
#include<stdio.h>
#include<math.h>

void f1()
{
	float x,y,sum;
	printf("enter the value of x and y:\n");
	scanf("%f%f", &x,&y);
	sum=x+y;
	printf("sum of x + y is: %0.2f",sum);
}
void f2()
{
	float x,y,sub;
	printf("enter the value of x and y:\n");
	scanf("%f%f", &x,&y);
	sub=x-y;
	printf(" Subtracting x-y is: %0.2f",sub);
}
void f3()
{
	float x,y,mult;
	printf("enter the value of x and y:\n");
	scanf("%f%f", &x,&y);
	mult=x*y;
	printf(" Multiplying x*y is: %0.2f",mult);
}
void f4()
{
	float x,y,div;
	printf("enter the value of x and y:\n");
	scanf("%f%f", &x,&y);
	div=x/y;
	printf(" Dividing x/y is: %0.2f",div);
}
void f5()
{
	float x,y,p1;
	printf("enter the value of x and y:\n");
	scanf("%f%f", &x,&y);
	p1=pow(x,y);
	printf("power of x^y is: %f",p1);
}
void f6()
{
	float x,s1;
	printf("enter the number:\n");
	scanf("%f", &x);
	s1=sqrt(x);
	printf("square root of %0.2f is = %.2f",x,s1);
}
void f7()
{
	double x,n,s2;
	printf("enter the number and the required nth root:\n");
	scanf("%lf%lf", &x, &n);
	s2=pow(x,1.0/n);
	printf("%0.2lfth root of %0.2lf is = %lf",n,x,s2);
}
void f8()
{
	double x,s3;
	printf("enter the number x for e^x:\n");
	scanf("%lf", &x);
	s3=exp(x);
	printf("Exponential value of e^%0.2lf is = %lf",x,s3);
}
void f9()
{
	double x,s4;
	printf("enter the number x for log10(x):\n");
	scanf("%lf", &x);
	s4=log10(x);
	printf("log10(%0.2lf) value is = %0.2lf",x,s4);
}
void f10()
{
	float angle,rad,s5;
		printf("enter angle in degrees\n");
		scanf(  "%f", &angle);
		rad=angle*0.0175;
		s5=sin(rad);
		printf ("sin(%0.2f)= %0.2f\n", angle,s5);	
}
void f11()
{
	float angle,rad,s6;
		printf("enter angle in degrees\n");
		scanf(  "%f", &angle);
		rad=angle*0.0175;
		s6=cos(rad);
		printf ("cos(%0.2f)= %0.2f\n", angle,s6);	
}
void f12()
{
	float angle,rad,s7;
		printf("enter angle in degrees\n");
		scanf(  "%f", &angle);
		rad=angle*0.0175;
		s7=tan(rad);
		printf ("tan(%0.2f)= %0.2f\n", angle,s7);	
}
void f13()
{
	float x,i;
	printf("enter the number:\n");
	scanf("%f", &x);
	i=1/x;
	printf("Value of 1/x is: %0.4f",i);
}
void f14()
{
	float x,perc;
	printf("enter the number :\n");
	scanf("%f", &x);
	perc=x/100;
	printf("Value in percentage is: %0.2f",perc);
}
void f15()
{
	float x,radian;
	printf("enter the angle in degrees x :\n");
	scanf("%f", &x);
	radian=x*0.0175;
	printf("Value of angle in radians is: %0.2f",radian);
}
void f16()
{
	float n,i,f=1;
	printf("enter the number to calculate factorial :\n");
	scanf("%f", &n);
	if(n<0)
	{
		printf("the value is infinite");
	
	}
	else
	{
		for(i=1;i<=n;i++)
		{
		f=f*i;
		}
		printf("Value of %f! is: %0.2f",n,f);
	}
}
main()
{
	printf("-*-*-*-*-*-*-*-*-*-*-*\n** Hello Calculator **\n");
	printf("-*-*-*-*-*-*-*-*-*-*-*\n\n");
	printf("Select the menu number from the list:-\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n 5.Power\n 6.Square root\n 7.Nth root of a number\n 8.Exponential value\n 9.log10\n 10.sin(angle)\n 11.cos(angle)\n 12.tan(angle)\n 13. 1/number(x)\n 14. Percent\n 15. Deg to Rad\n 16. Factorial\n 17.Exit\n\n");
	
	int s;
	scanf("%d", &s);
	switch(s)
	{
		case 1: f1();
			break;
		case 2: f2();
			break;	
		case 3: f3();
			break;
		case 4: f4();
			break;	
		case 5: f5();
			break;
		case 6: f6();
			break;
		case 7: f7();
			break;
		case 8: f8();
			break;
		case 9:
			f9();
			break;
		case 10:
			f10();
			break;
		case 11:
			f11();
			break;
		case 12:
			f12();
			break;
		case 13:
			f13();	
			break;
		case 14:
			f14();
			break;
		case 15:
			f15();
			break;
		case 16:
			f16();
			break;
		case 17:
			return 0;
			break;
		default:
			printf("Invalid input");
			break;
			
	}
}

		
		
	



