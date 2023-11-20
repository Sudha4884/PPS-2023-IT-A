#include<stdio.h>
void main()
{
    int x = 25,y;
    y = 1+x;
    printf("\n%d",x);
    printf("\n%d",y);
    y = x++;
    printf("\n%d",x);
    printf("\n%d",y);
}
