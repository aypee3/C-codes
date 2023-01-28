#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node
{
	int data;
	struct Node *next;
};

	void main()
	{
		struct Node *start, *newNode, *cn;
		//clrscr(); works only in old Turbo
		system("cls");
		newNode=(struct Node*)malloc(sizeof(struct Node));
		
		printf("Enter the data\n");
		scanf("%d", &newNode->data);
		newNode->next=NULL;
		start=newNode;
		
		cn=start;
		while(cn!=NULL)
		{printf("%d",start->data);
		cn=cn->next;	
		}
		getch();
	}
	

