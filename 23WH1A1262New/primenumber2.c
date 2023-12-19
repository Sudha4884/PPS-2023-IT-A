//prime numbers in other program
#include<stdio.h>
void main()
{
 int i,n,flag=0;
 printf("enter a number: ");
 scanf("%d",&n);
	for(i=2;i<n;i++)
{
	if(n%i==0)
	{
	flag=1;
	break;
	}
}
	if(flag==0)
	printf("\n it is a prime number");
	else
	printf("\n it is not a prime number");
}
