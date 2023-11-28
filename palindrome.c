#include<stdio.h>
int palindrom(int);
int main()
{
int rem,result,n;
printf("enter a number");
scanf("%d", &n);
result = palindrom(n);
return 0;
}

int palindrom (int num)
{
int result,n,rem;
n=num;
result=0;
while(num!=0)
{
rem=num%10;
result = (result*10)+rem;
num=num/10;
}
if (result=0)
printf("its not a palindrom");
else
printf("its a palindrom");
return 1;
}
