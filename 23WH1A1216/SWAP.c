//SWAPPING OF TWO NUMBERS
#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter two number to be swaped:");
   scanf("%d %d",&a,&b);
   printf("a is %d \n",a);
   printf("b is %d \n",b);
   c=a;
   a=b;
   b=c;
   printf("The numbers after swapping are:");
   printf("\n a is %d \n",a);
   printf("b is %d \n",b);
}
