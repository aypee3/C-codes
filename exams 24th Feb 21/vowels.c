#include<stdio.h>
int main()
{
char ch;
printf("enter the alphabet\n");
scanf("%c",&ch);
if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
{
printf("The alphabet %c is a vowel\n",ch);
}
else
{
printf("The alphabet %c is not a vbowel\n",ch);
}
return 0;
}
