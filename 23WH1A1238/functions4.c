#include<stdio.h>
void isprime(int);
void main()
{
int r,i;
printf("Enter the range ");
scanf("%d",&r);
for (i=2 ;i<=r ;i++)
isprime(i);
}
void isprime(int n)
{
 int i,c=0;
 for (i=1 ; i<n ;i++)
 {
  if (n%i==0)
  c++;
 }
if (c==2)
 printf("\n %d ", n);
}
