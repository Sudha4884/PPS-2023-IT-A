//program for prime numbers
#include<stdio.h>
void main()
{
 int i,n,count=0;
 printf("enter a number: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{
	if(n%i==0)
	{ 
	 printf("\n %d ",i); 
count++;
	}
}
	if(count==2)
	{
	printf("\n %d is prime",n);
	}
	else
	{
	printf("\n %d is not prime",n);
	}
}
