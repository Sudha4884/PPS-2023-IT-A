// finding gcd of numbers
#include<stdio.h>
int main()
{
int i,a,b,gcd,big,small,n;
printf("enter two  number : ");
scanf("%d \n%d",&a,&b);
if (a>b)
 small=b;
else
 small=a;
for(i=1;i<=small;i++)
	{
	if (a%i==0 && b%i==0)
	{
	gcd = i;
        }
 	}
 printf("gcd = %d",gcd);
return 0;
}

		
				
