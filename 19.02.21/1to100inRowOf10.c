#include<stdio.h>
#include<math.h>
int main()
{
printf("Printing 1 to 100 in a row of 10\n\n");
int i;
for(i=1; i<101; ++i)
{
printf("%d\t",i);
if(i%10==0)
printf("\n");
}
return 0;

}
