#include<stdio.h>
int palindrom(int);
int main()
{
int rem,result,num;
printf("enter the number");
scanf("%d",&num);
result = palindrom(num);
return 0;
}
int num;
int palindrom(int num)
{
int result=0;
while(num!=0)
{
int rem=num%10;
result=(result*10)+rem;
num=num/10;
}
if (result=0)
printf("its not a palindrom");
else
printf("its a palindrom");
return 1;
}

