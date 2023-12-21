#include<stdio.h>
void main()
{
 int a,b,c;
 printf("\n enter a,b,c");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
   {
     if(a>c)
       { 
         printf("\n a is greater");
       }
      else
       {
         printf("\n c is greatest");
       }
    }
 else(b>c)
   {
      if(b>c)
         {
           printf("\n b is greatest");
         }
       else
         {
           printf("\n c is greatest");
         }
    }
}
