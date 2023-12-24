#include<stdio.h>
void printquadrant(int ,int);
void main()
{
 int x,y;
 printf("\n enter x,y coordinates");
 scanf("%d%d",&x,&y);
 printquadrant(x,y);
 }
 void printquadrant(int x,int y)
 {
 if(x>0 && y>0)
printf("quadrant 1");
else if ( x<0 && y>0)
printf("quadrant 2");
else if (x<0 && y<0)
printf("quadrant 3");
else if (x>0 &&y<0)
printf("quadrant 4");
   }
