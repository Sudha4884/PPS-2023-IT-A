#include<stdio.h>
int palidrome(num);
int main()
{
int rem,result,n;
printf("enter a number");
scanf("%d",&n);
result= palidrome(n);
if (result==1)
printf("it is a palidrome");
else
printf("it is not a palidrome");
return 0;
}
int rem,result,num;
int palidrome(num)
{
result=0;
while(num!=0)
{
rem=num%10;
result=(result*10)+rem;
num=num/10;
return 1;
}
}

