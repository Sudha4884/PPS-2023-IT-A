#include<stdio.h>
int checkpalindrome(int);
int main()
{
int number,a;
printf("enter number");
scanf("%d",&number);
a= checkpalindrome(number);
if(a == 1)
printf(" number is a palindrome ");
else
printf(" number is not a palindrome");

}
int checkpalindrome(int n)
{
int r,sum=0;
while(n!=0)
{ 
 r=n%10;
 sum= sum*10 + r;
 n=n/10;
}
if (sum == n)
  return 1;
else 
  return 0;

}
