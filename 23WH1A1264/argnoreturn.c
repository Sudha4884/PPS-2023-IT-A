#include<stdio.h>
int sum(int,int)
void main()
{
	int a,b,c;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	c=sum(a,b);
	printf("the sum is %d",c);
}
int sum(int a,int b)
{
	int sum=0;
	sum=a+b;
	return sum;
}
