#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("enter a +ve integer"); // enter a integer value
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;

    }
    printf("sum of digits is %d",sum);
}