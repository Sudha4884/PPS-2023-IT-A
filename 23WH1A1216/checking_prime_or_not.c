#include<stdio.h>
void main()
{
int n,i,c=0;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if (n%i==0)
   {
   c++;
   }
   }
if (c==2)
 {
printf("n=%d is prime no",n);
  }
else
{
printf("n=%d not a prime number",n);
}
}
