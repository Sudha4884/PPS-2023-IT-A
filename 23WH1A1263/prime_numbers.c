#include<stdio.h>
void is_prime(int);
void main()
{
int a,b;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
for(int num=a;num<=b;num++)
is_prime(num);
}
void is_prime(int n)
{
int i,count=0;
for (i=1;i<=n;i++)
{
if ((n%i)==0)
count++;
}
if (count==2)
printf("%d ", n);
}

