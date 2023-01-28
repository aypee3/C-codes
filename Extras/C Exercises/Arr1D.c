#include<stdio.h> 
int main() 
{ 
int s[5] = {89, 76, 98, 91, 84}, I; 

printf("\n---Students marks details---");
for(I = 0; I < 5; I++) 
{
printf("\nFor student %d = %d", I+1, s[I]); 
} 
return 0;

}
