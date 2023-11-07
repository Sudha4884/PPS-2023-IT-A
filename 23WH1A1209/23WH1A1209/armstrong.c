#include<stdio.h>
void main()
{
int n,r,sum;
 
printf("Enter a number: ");
scanf("\n %d",&n);
int n1=n;

while (n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}

if (sum==n1)
{ printf("The number is an armstrong.");
}
else
{ printf("The number is not an armstrong.");
}
}
