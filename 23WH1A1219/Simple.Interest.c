#include<stdio.h>
int main()
{
   int p,r,t;
   float i;
   printf("Enter the Principal, Rate and Time\n");
   scanf("%d %d %d",&p,&r,&t);

/*Formula for calculating simple interest*/

   i=p*r*t/100;       

   printf("simple interest is : %f",i);
   return 0;
}



