#include<stdio.h>
void isprime(int);
void main()
{
  isprime(5);
}
void isprime(int num)
{
 int i,count=0;
 printf("enter num");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
   if(num%i==0)
   count++;
 }
 if (count==2)
   printf("\n prime");
else
 printf("\n not prime");
 }
