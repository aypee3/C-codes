#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter the 5 numbers\n");
scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
if( a>b && a>c && a>d && a>e)
{
printf("%d is the greatest number", a);
}
else if( b>a && b>c && b>d && b>e)
{
printf("%d is the greatest number", b);
}
else if( c>a && c>b && c>d && c>e)
{
printf("%d is the greatest number", c);
}
else if( d>a && d>b && d>c && b>e)
{
printf("%d is the greatest number", d);
}
else if( e>a && e>b && e>c && e>d)
{
printf("%d is the greatest number", e);
}
else
{
printf("There is no single largest number");
}
return 0;
}
