#include <stdio.h>
int main()
{
 int i,num,count=0;
 printf("Enter the max value: ");
 scanf("%d",&num);
 for(i=2;i<=num;i++)
 {
  if(twinprime(i) && twinprime(i+2))
  {
   printf("The twin prime numbers are %d %d",i,i+2);
   count++;
  }
 }
 printf("\nTotal number of twin primes pairs: %d",count);
 return 0;
}  
int twinprime(int n)
{
 int i=2,c=0;
 for(i=2;i<n;i++)
 {
   if(n%i==0)
    c++;
 } 
  if(c==0)
    return 1;
  else
    return 0;
}
    
