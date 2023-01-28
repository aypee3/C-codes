/*#include<stdio.h>

struct Point
{
int x, y;
};

int main()
{
struct Point p1 = {0, 1};

// Accessing members of point p1
p1.x = 20;
printf ("x = %d, y = %d", p1.x, p1.y);

return 0;
}*/

/*#include<stdio.h>

struct Point
{
int x, y, z;
};

int main()
{
// Examples of initialization using designated initialization
struct Point p1 = {.y = 0, .z = 1, .x = 2};
struct Point p2 = {.x = 20};

printf ("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
printf ("x = %d", p2.x);
return 0;
}*/


/*#include<stdio.h>

struct Point
{
int x, y;
};

int main()
{
// Create an array of structures
struct Point arr[10];

// Access array members
arr[0].x = 10;
arr[0].y = 20;

printf("%d %d", arr[0].x, arr[0].y);
return 0;
}*/


/*#include<stdio.h>

struct Point
{
int x, y;
};

int main()
{
struct Point p1 = {1, 2};

// p2 is a pointer to structure p1
struct Point *p2 = &p1;

// Accessing structure members using structure pointer
printf("%d %d", p2->x, p2->y);
return 0;
}
*/






