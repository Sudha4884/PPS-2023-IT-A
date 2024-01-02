#include<stdio.h>
int gcd(int a,int b)
{
	while(b!=0)
	{
		int t = b;
		b = a%b;
		a = t;
	}
	return a;
}
int main() 
{
	int a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	printf("the gcd of %d and %d is %d",a,b,gcd);
	return 0;
}
