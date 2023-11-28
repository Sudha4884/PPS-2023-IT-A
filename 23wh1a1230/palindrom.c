#include<stdio.h>
int palindrom(int);
int main()
{
int rem,result,n;
printf("Enter a number");
scanf("%d",&n);
result = palindrom(n);
if(result==1)
printf("it is a  palindrom");
else
printf("it is not palindrom");
return 0;
}
int rem,result,num;
int palindrom(int num)
{
result= 0;
while(num!=0)
{
rem=num%10;
result=(result*10)+rem;
num=num/10;
return 1;
}
}

