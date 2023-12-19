//preprocessors
#include<stdio.h>
#define MAX(a,b) ((a)<(b))?(a):(b)
void main()
{
int a,b;
printf("enter a :");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
printf("%d",MAX(a,b));
}
