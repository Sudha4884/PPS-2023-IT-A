// finding min and max of array values
#include<stdio.h>
int main()
{
int i,b,max,min;
int a[5];
printf("enter your numbers : ");
scanf("%d",&b);
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
	max =a[0],min = a[0];
	for (i=1;i<5;i++)
{
if(a[i]>max)
max = a[i];
if(a[i]<min)
min = a[i];
}
printf(" max is %d and min is %d",max,min);
	
return 0;
}


