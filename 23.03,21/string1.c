#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter the name\n");
	scanf("%[^\n]s", &name);// IF WE GIVE GAP IN THE NAME THEN PRINTS ONLY FIRST NAME EG, APURVA ONLY, so we used [^n] TO PRINT APURVA PRAKASH
	printf("The name is: %s\n", name);
	return 0;
}
