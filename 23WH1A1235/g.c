#include<stdio.h>
int checkPalindrome(int);
void main()
{
int a, rem;
printf("\n enter number");
scanf("%d",&a);
}
int checkPalindrome(int a)
{
int n, rem;
while(a>0)
{
a = a/10;
rem = a%10;
printf("%d",rem);
a++;
}
if(n==rem)
return 1;
else
return 0;
}
