#include<stdio.h>
int fibonaci(int n)
{
 if(n<=1){
return n;}
else
{
return fibonaci(n-1)+fibonaci(n-2);}
}
int main()
{
int n,i;
printf("enter the value of n:");
scanf("%d",&n);
printf("fibonaci series:");
for(i=0;i<n;i++){
printf("\n%d",fibonaci(i));
}
return 0;
}

