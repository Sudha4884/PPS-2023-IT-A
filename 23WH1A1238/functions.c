#include<stdio.h>
void iscollatz(int);
void main ()
{
int n ;
printf("Enter a number");
scanf("%d" , &n);
iscollatz(n);
}
void iscollatz(int n)
{
  int i , a=0;
  printf("%d" , n);
  while (n!=1)
    {
       if (n%2==0)
        {
         n = n/2;
         a++;
         printf("\n %d", n);
         }
       else
        {
         n=(3*n)+1;
         a++;
         printf("\n %d",n);
         }
     }
   printf("%d , is the count of the terms", a);
}
