#include<stdio.h>
void is_prime(int);
void main()
{
int start,end;
printf("enter the starting number:");
scanf("%d",&start);
printf("enter the ending number:");
scanf("%d",&end);
for (int num=start;num<=end;num++)
is_prime(num);
}
void is_prime(int n)
{
int i,count=0;
for( i=1;i<=n;i++)
{
if( n % i ==0)
count ++;
}
if (count==2)
printf("\n%d",n);
}

