#include<stdio.h>
int sumofnums(int n);
void main()
{
int n ;
printf("Enter a number: ");
scanf("%d", &n);
printf("sum = %d", sumofnums(n));
}
int sumofnums(int n)
{
if(n != 0)
return n + sumofnums(n-1);
else
return n;
}
