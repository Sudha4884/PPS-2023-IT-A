#include<stdio.h>
int strong(int);
void main() {
int n,ans;
printf("enter a number");
scanf("%d", &n);
ans = strong(n);
if (ans == 1)
printf("strong number");
else
printf("not a strong number");
}
int strong(int n)
{
int fact = 1,r = 0,sum,b=0;
sum = n;
while (n!=0) {
r = n%10;
fact = 1;

for(int i =1; i<=r;i++) {
fact = fact*i;
}
sum = fact+sum;
n = n/10;
}
if (b == sum)
return 1;
else
return 0;
}

