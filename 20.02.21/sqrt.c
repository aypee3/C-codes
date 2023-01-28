#include<stdio.h>
#include<math.h>
int main()
{
float sqt;
int a;

printf("enter the number to get squareroot\n");
scanf("%d", &a);
sqt = sqrt((float)a);

printf("The squareroot of %d is :%.2f", a,sqt);
return 0;

}
