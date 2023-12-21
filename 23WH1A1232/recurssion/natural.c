#include<stdio.h>
int addNumbers(int n);
int main() {
 int n;
printf("enter a positive integer");
scanf("%d",&n);
printf("sum=%d",addNumbers(n));
return 0;
}
int addNumbers(int n)
{
if (n != 0)
return n + addNumbers(n-1);
else
return n;
}
