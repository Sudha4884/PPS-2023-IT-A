#include<stdio.h>
int fibo(int);
void main()
{
int n;
int result;
printf("enter the nth number");
scanf("%d",&n);
for (int i =0;i<=n;i++){
printf("%3d",fibo(i));
}
}
int fibo(int n){
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else 
{
return(fibo(n-1)+fibo(n-2));
}
}
