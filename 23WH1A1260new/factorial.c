#include<stdio.h>
void main()
{
int a,s;
 a=5;
 int  fact( a);
s = fact(a);
printf("%d",s);
}
int fact(int a)
{
if(a==0)
return 1;
else
return fact(a-1)*a;
}
