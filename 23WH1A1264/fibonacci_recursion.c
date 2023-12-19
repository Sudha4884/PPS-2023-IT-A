#include<stdio.h>
 int fibonacci(int n){
 if (n==0)
{
 return 0;
}
else if(n==1)
{
return 1;
}
else{
 return fibonacci(n-1)+fibonacci(n-2);
}
}
void main()
{
 int a;
printf("enter the a");
scanf("%d ",&a);
 int result;
result= fibonacci(a);
printf("the fibonacci of 6 is %d",result);
}
