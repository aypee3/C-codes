#include<stdio.h>
#include<math.h>
int main()
{
int i, n, r=1;
printf("Enter the number to calculate factorial\n\n");
scanf("%d", &n);
for(i=1; i<=n; i++)
 {
r=r*i;
}
printf("The value of %d factorial is= %d",n,r);

return 0;

}
