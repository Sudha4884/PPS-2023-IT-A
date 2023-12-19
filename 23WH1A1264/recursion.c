#include<stdio.h>
void sum(int,int);
void sum(int a,int b)
 {
	int sum=0;
	printf("enter the numbers");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("the sum of a,b is %d",sum);
	
	
	
	
}
void main()
{
	int p;
  p=sum();
printf("the sum is %d",sum);
}
