#include<stdio.h>
int addnumbers(int n);
int main()
{
int n;
printf("enter a positive integer:");
scanf("%d",&n);
printf("sum=%d",addnumbers(n));
return 0;
}
int addnumbers(int n)
{
if (n!=0)
return n+addnumbers(n-1);
else 
return n;
}

