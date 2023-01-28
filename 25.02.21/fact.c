// #include<stdio.h>
// #include<math.h>

// int fact(int num)
// {
// int f=1;
// for(int i=num;num>1;i--)
// {
//     f=f*i;
// }
// return f;
// }

// int main()
// {
//     int y=fact(3);
//     printf("factorial value is:\t",y);
//     return 0;
// }

#include<stdio.h>
#include<math.h>

int fact(int num)
{
// int i=0;
int f=1;
for(int i=num;i>1;i--)
{
    f=f*i;
}
return f;
}

int main()
{
    // fact(3);
    printf("factorial value is:\t %d",fact(3));
    return 0;
}