#include<stdio.h>
int check_palindrome(int);
int main()
{
int num,a;
printf("enter num");
scanf("%d",&num);
a= check_palindrome(num);
if(a == 1)
printf(" is palindrome ");
else
printf(" not palindrome");

}
int check_palindrome(int n)
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

