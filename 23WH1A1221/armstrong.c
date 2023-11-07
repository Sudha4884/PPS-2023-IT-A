#include<stdio.h>
void main()
{
int n,r,temp,sum=0;
printf("enter any number");
scanf("%d",&n);
temp = n;
while (n>0)
 {
  r = n%10;
  sum = sum+(r*r*r);
  n= n/10;
 }
 if (temp==sum)
  printf("n is armstrong");
 else
  printf("n is not a armstrong");

}
