
#include<stdio.h>
void main()
{
int i,n,a;

printf("Enter a number: ");
scanf("\n %d",&n);

a=0;
for (i=1; i<=n; i++)
{ 
if( (n%i)==0)
a++;
}
if (a==2)
{ printf("The number is a prime.");
}
else
{ printf("The number is not a prime.");
}
}
