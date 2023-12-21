#include<stdio.h>
int re_fibonacci(int n)
{
if(n<=1)
return n;
else
return re_fibonacci(n-1) + re_fibonacci(n-2);
}
int main()
{
int n;
printf("\n enter the number of fibonacci terms:");
scanf("%d", &n);
printf("fibonacci sequence \n:");
for(int i=0;i<n;i++)
{
printf("%d\n", re_fibonacci(i));
}
return 0 ;
}

