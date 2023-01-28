#include<stdio.h>
struct  address // can be made in some other file on desktop or at same address in this file
{
	int pincode;
	char city[20]; // C doesn't have any string data type so use char array
	// can store upto 20 characters

};

struct emp // can be made in some other file on desktop or at same address in this file
{
	int id;
	char name[20]; 
	struct address addrobj;
};

int main()
{
	struct emp obj1[100];
	
	printf("Enter the id of employee\n");
	scanf("%d", &obj1[0].id);
	fflush(stdin);
	printf("Enter the name of employee\n");
	fgets(obj1[0].name,50,stdin); // increases the storage character size to eg. 50 (but skips line in print output)see - char name line no. 13
	//scanf("%[^\n]s", &obj1.name);
	fflush(stdin);
	printf("Enter the city\n");
	scanf("%[^\n]s", &obj1[0].addrobj.city);
	printf("The employee name %s with id - %d city is %s\n", obj1[0].name, obj1[0].id, obj1[0].addrobj.city);
	return 0;
}
