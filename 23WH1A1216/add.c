#include<stdio.h>
int add()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("\t %d",a+b);
    return a+b;
}
int main()
{   
   if(add())
   printf("successful");
   else 
     printf("unsuccessful");
}
