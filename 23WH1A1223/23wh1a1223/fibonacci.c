#include<stdio.h>
int fibonacci (int);
void main()
{
int n,i;
printf("enter n values");
scanf("%d",&n);
for(i=0;i<n;i++)
printf("%d",fibonacci(i));
}
int fibonnaci(int n)
{
int i;
if (n==0)
return 0;
else if(n==i)
return 1;
else
return(fibonacci(n-1)+fibonacci(n-2));
}


