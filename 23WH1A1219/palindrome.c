#include<stdio.h>
int checkpalindrome(int);
int main()
{
int a,num;
printf("Enter a number");
scanf("%d",&num);
a=checkpalindrome(num);
if(a==1)
printf("Is a palindrome");
else
printf("Is not a palindrome");
}
int checkpalindrome(int num)
{
int reverse=0,remainder;
int n=num;
while(num!=0)
{
remainder=num%10;
reverse=reverse*10+remainder;
num/=10;
}
if(reverse==n)
return 1;
else
return 0;
}
