#include<stdio.h>
#include<math.h>
int main()
{
int a,b,p;
printf("enter the number and its power\n");
scanf("%d%d", &a, &b);
p= pow(a, b);
printf("The power of %d on %d is : %d", b, a, p);
return 0;

}
