#include<stdio.h>
int fibo(int n)

{ 
 if (n==0)
{
 return 0;
}
else if(n==1)
{
return 1;
}
else{
 return fibo(n-1)+fibo(n-2);
}
}

void main()
{
int i,n;
printf("enter the n");
scanf("%d",&n);
 printf("the fibonocci series ");
for(i=0;i<=n;i++)
{
 int result=fibo(i);
printf("\n %d",result);
}
}
