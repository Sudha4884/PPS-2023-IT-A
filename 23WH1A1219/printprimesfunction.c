#include<stdio.h>
void print_primes(int,int);
int isprime(int);
void main()
{
int start,end;
printf("Enter Start and end");
scanf("%d  %d",&start,&end);
print_primes(start,end);
}
void  print_primes(int start,int end)
{
int count=0,i,n;
for(i=start;i<=end;i++)
{
n=isprime(i);
if(n==1)
printf("%d  \n",i);
}
}
int isprime(int num)
{
int count=0;
for(int i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==2)
return 1;
else 
return 0;
}
