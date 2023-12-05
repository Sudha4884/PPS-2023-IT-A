#include <stdio.h>
void main()
{ 
 int i,n;
 printf("Enter range: ");
 scanf("%d",&n);
 for(i=2;i<=n;i++)
   isprime(i);
}
void isprime(int n)
{
 int i,count=0;
 for(i=1;i<=n;i++)
 {
  if(n%i == 0)
   count++;
 }
 if(count == 2)
   printf("\n%d",n);
}
