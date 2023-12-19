#include<stdio.h>
void primes(int);
void main(){
int i,n,count;
scanf("%d",&n);
for(i=1;i<n;i++)
primes(i);
}
void primes(int n)
{
int i, count=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count==2)
printf("primes are %d \n ",n);
}
