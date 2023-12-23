#include<stdio.h>
int check_pollindrome(int);
int main()
{
int num,temp,sum;
printf("enter num");
scanf("%d",&num);
check_palindrome(num);
if(temp == sum)
printf("is pallindrome");
else
printf(" not pallindrome");
}
int check_pallindrome(int n)
{
int temp,r,sum=0;
while(n!=0) 
{temp=n;
n=n/10;
sum=sum*10 +r;
n=n/10;
}
if (temp == n)
return 1;
else 
 return 0;
}


