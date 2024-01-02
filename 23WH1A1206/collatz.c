#include <stdio.h>
void main()
{
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);
 isCollatz(n);
}

void isCollatz (int n)
{
 int i,a=0;
 printf("%d",n);
 while(n != 1)
 {
  if(n%2 == 0)
  {
    n = n/2;
    a++;
    printf("\n%d",n);
  }
  else
  {
   n = (3*n)+1;
   a++;
   printf("\n%d",n);
  }
 }
 printf("\n%d is the count of terms",a);
}