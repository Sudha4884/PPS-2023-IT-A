#include<stdio.h>
int palindrome(int);
int main()
{
int result,x;
printf("Enter a number");
scanf("%d",&x);
result= palindrome(x);
if (result==1)
{printf("PALINDROME");
}
else
{printf("NOT PALINDROME");
}
}
int palindrome(int no)
{
int x,r,rev;
int n=x;
rev=0;
while (x !=0)
{
r =n % 10;
n= n/ 10;
rev= (rev *10)+ r;
}
if (rev==n)
return 1;

}

