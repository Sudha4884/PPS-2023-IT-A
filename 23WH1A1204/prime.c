#include<stdio.h>
void main()
{
	int num;int k=0;
scanf("%d",&num);
for(int i =1;i<=num;i++)
{
if((num%i)==0)
{
k=k+1;
}
}
if (k==2)
{
printf("the number is prime");
}
else
printf("the number is not prime");
}

