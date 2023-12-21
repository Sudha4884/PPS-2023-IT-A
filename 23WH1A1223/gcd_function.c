#include<stdio.h>
int g(int,int);
int main()
{
int a,b;
printf("Enter two numbers to find their gcd:");
scanf("%d%d",&a,&b);
int gcd=g(a,b);
printf("\n gcd is %d",gcd);
return 0;
}
int g(int a,int b)
{
int r;
if(b!=0)
	{
	r=a%b;
	a=b;
	b=r;
	return g(a,b);
	}
else
{
return a;
}
}

