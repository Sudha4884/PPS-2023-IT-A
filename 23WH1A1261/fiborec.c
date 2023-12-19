#include<stdio.h>
int fibonacci(int n)
{
if(n<=1){
 return n;
}else
{
return fibonacci(n-1)+fibonacci(n-2);
}
}
int main()
{
int n,i;
printf("Enter number of terms:");
scanf("%d",&n);
printf("\nFibonaccci series:");
for(i=0;i<n;i++){
printf("\n%d", fibonacci(i));
}
return 0;
}
