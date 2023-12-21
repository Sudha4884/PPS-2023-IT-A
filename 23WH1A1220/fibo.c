#include<stdio.h>
int fibonacci(int n)
{
if(n<=1)
return n;
else
return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
int n;
printf("\n enter the no of fibonacci terms");
scanf("%d",&n);
printf("fibonacci sequence\n");
for(int i=0;i<n;i++)
{
printf("%d\n",fibonacci(i));
}
return 0;
}

