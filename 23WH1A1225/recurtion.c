#include<stdio.h>
int factorial (int n);
int main()
{
int n,f;
printf("enter the n numbers");
scanf("%d",&n);
f = factorial(n);
printf("%d",f);
}
int factorial (int n)
{
if(n==1)
return 1;
else
return n*factorial(n-1);

}





