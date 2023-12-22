#include <stdio.h>
void swap(int,int);
void swapRef(int,int);
void main()
{
    int a,b;
    printf("Enter a,b: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    swapRef(&a,&b);
}
void swap(int x,int y)
{
    int t=x;
    x=y;
    y=t;
}
void swapRef(int *x, int*y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
