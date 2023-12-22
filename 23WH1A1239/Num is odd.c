#include <stdio.h>
void main()
{
   int num;
   printf("Enter num = ");
   scanf("%d",&num);
   if((num%2)!=0)
   {
       printf("The number is odd.");
   }
   else{
    printf("The number is not odd.");
   }
}
