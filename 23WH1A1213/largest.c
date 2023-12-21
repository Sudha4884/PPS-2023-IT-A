#include<stdio.h>
void main()

{
 int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
  {
      if(a>c)
         printf("%d is greatest",a);
      else
         printf("%d is greater",c);
   }
else
   {
      if(b>c)
         printf("b is greater than c");
      else
         printf("c is greatest");
    } 
} 
