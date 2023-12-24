// sum of digits in number
#include<stdio.h>
void main()
{
int n,sum=0,r;
printf("n");
scanf("%d",&n);
  while(n!=0)
    {
    r=n%10;
    sum = sum + r ;
    n=n/10;
    }
printf("%d",sum);
}
