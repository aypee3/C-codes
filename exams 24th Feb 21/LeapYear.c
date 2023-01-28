#include<stdio.h>
int main()
{
int i;
printf("Enter the year value\n");
scanf("%d", &i);
if(i%4==0 && i%100!=0 && i%400!=0)
{
printf("The year is a leap year");
}
else
{
printf("The year is not a leap year");
}
    return 0;
}
