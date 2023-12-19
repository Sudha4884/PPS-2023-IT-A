#include<stdio.h>
void is_prime(int);
void main()
{
int a,b;
printf("Enter the value of A:");
scanf("%d",&a);
printf("Enter the value of B:");
scanf("%d",&b);

for(int num=a;num<=b;num++)
is_prime(num);
}
void is_prime(int n)
{
int i,cnt=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
cnt++;
}
if(cnt==2)
printf("\n%d",n);
}
