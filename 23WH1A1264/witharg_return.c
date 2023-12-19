#include<stdio.h>
 int jumble(int x,int y)
 {
 	y=2*x+y;
 	return x;
 }
 void main()
 {
 	int x=2,y=5;
 	x=jumble(y,x);
 	y=jumble(y,x);
 	printf( "y=%d",y);
 }
