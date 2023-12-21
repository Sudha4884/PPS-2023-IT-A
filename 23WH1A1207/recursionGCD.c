#include<stdio.h>
void main()
{
int a,b,g,GCD();
printf("enter 2 numbers : ");
scanf("%d%d",&a,&b);
g=GCD(a,b);
printf("\n %d",g);
}

int GCD(int a,int b)
{
if (b==0)
	return a;
else 
	return GCD(b,a%b);
}

