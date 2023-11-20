#include <stdio.h>
void main(){
   int x,n,sum=0,i;
   printf("Enter x: ");
   scanf("%d",&x);
   printf("Enter n: ");
   scanf("%d",&n);
   if(x < 0 || n < 0)
   {
      printf("illegal  value");
   }
   else
   {
      for(i = 0; i <= n; i++){
        sum= pow(x, i);
        printf("%d",sum);
        printf("+");
      }

   }
   printf("%d", sum);
}
