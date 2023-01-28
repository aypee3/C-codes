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
	struct emp obj1[100], *ptr;// if we write *ptr in same line as struct then its data type is emp.obj1
// or we can line in next line
// eg. in next line ---  struct emp *ptr;
// or we can write in for loop with i as ---  (ptr+i)=obj1[i]
	ptr=&obj1[0];
	printf("Enter the id of employee\n");
	scanf("%d", &ptr->id); // works with &ptr as well ptr only ; see line 29 and 32
	fflush(stdin);
	printf("Enter the name of employee\n");
	//fgets(obj1[0].name,50,stdin); // increases the storage character size to eg. 50 (but skips line in print output)see - char name line no. 13
	scanf("%[^\n]s", ptr->name);
	fflush(stdin);
	printf("Enter the city\n");
	scanf("%[^\n]s", ptr->addrobj.city);
	printf("The employee name %s with id - %d city is %s\n", obj1[0].name, obj1[0].id, obj1[0].addrobj.city);
	return 0;
}
