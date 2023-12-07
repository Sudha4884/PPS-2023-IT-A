#include<stdio.h>
void isprime(int);
int main()
{
int i,num,count=0;
printf("enter the last number");
scanf("%d",&num);
   for(i= 2 ;i <= num; i++)
    {
    
      if (twinprime(i) && twinprime(i+2))
       {
         printf("\n the twin prime number is %d  %d" ,i ,i+2);
         count++;
        }
     }
  printf("\n total number of twin pair = %d ",count);
    return 0;
}
 int twinprime(int n)
  {
   int i=2,c=0;
    for (i=2 ; i< n ; i++)
     {
      if (n%i == 0)
       c++;
       //return 0;
      } 
  if (c==0)
   return 1;
else 
return 0;
}


