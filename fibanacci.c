#include<stdio.h>
int fibanacci(int n);
int main()
{
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
printf("%d",fibanacci(i));
}
int fibanacci (int n)
{
if (n==0)
return 0;
else if (n==1)
return 1;
else
return(fibanacci(n-1)+fibanacci(n-2));
}
