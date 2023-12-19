#include<stdio.h>
int linear(int a[],int n);
void main()
{
int n,a[10];
printf("enter n elements");
scanf("%d",&n);
linear(a,n);
}


int linear(int a[],int n)
{
int k;
if (n==0)
return -1;
else
{
 if(k==a[n-1])
return n-1;
else 
return linear(a,n-1,k);
}
}
