#include<stdio.h>
#include<math.h>
int main ()
{
float num;
int i;

printf("enter the number in decimals:\n");
scanf("%f", &num);

i=	floor(num);
printf("The floor value is :%d", i);

return 0;

}
