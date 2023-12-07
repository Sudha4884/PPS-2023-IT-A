#include<stdio.h>
void swap(int,int);
void swapRef(int*,int*);
void main()
{
int a,b;
printf("enter a number");
scanf("%d%d",&a,&b);
swapRef(&a,&b);
printf("after swap");
printf("%d %d",a,b);
}
void swapRef(int*x,int*y)
{
int t;
t=*x;
*x=*y;
*y=t;
}void swap(int m,int n)
{
int t;
t=m;
m=n;
n=t;
printf("i am in swap");
printf("after a swap");
}

