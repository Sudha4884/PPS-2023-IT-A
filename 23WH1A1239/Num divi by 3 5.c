#include <stdio.h>
void main()
{
    int a ;
    printf("a = ");
    scanf("%d",&a);
    if(((a%3)==0)&&((a%5==0)))
       {
           printf("This is divisible by 3 and 5");
       }
}
