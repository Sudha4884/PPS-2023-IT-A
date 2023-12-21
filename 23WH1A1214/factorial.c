#include<stdio.h> 
void fatorial_number(int);
void main()
{
int n,fact;
scanf("%d",&n);
printf("\n factorial of a number is %d");
fact= factorial_number(5);
}
void  factorial_number(int num)
{
 int  n,i,fact;
scanf("%d",&n);
for(i=0;i<=n;i++);
 {  
   fact=fact*i;
 }
  return fact;
}
