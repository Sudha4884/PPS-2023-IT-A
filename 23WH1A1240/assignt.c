#include<stdio.h>
void main(){
int x,y;
printf("enter the values of x and y");
scanf("%d%d",&x,&y);
x=x^y;
y=x^y;
x=x^y;
printf("\n%d\n%d",x,y);
}
