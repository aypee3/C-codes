# include<stdio.h>

struct address
{
	int pincode;
	char city[20];
};

struct student
{
	int stdid;
	char stname[30];
	struct address addr;
};

int main()
{
	struct student st[3], *sptr;
	sptr = &st[0];
	printf("Enter the student's Name:\n");
	scanf("%[^\n]s", &st[0].stname);
	printf("Enter the pincode:\n");
	scanf("%d" , &st[0].addr.pincode);
	
	printf("The name and pincode are %s & %d respectively\n", sptr->stname, sptr->addr.pincode);
	
	
}
