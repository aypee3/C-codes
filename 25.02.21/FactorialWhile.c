#include<stdio.h>
#include<math.h>
int main()
{
int i=1, n, r=1;
printf("Enter the number to calculate factorial\n\n");
scanf("%d", &n);
while( i<=n)
 {
r=r*i;
i=i+1;    
}
printf("The value of %d factorial is= %d",n,r);

return 0;

}
