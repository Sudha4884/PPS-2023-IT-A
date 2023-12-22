#include <stdio.h>
void printQuadrant(int,int);
void main()
{
    int x,y;
    printf("\n Enter x,y cordinates\n");
    scanf("%d,%d",&x,&y);
    printQuadrant(x,y);
}
void printQuadrant(int x,int y)
{
    if((x>0)&&(y>0))
        printf("Q1");
    else if((x<0)&&(y>0))
        printf("Q2");
    if((x<0)&&(y<0))
        printf("Q3");
    if((x>0)&&(y<0))
        printf("Q4");
}
