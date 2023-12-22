#include <stdio.h>
int fact(int);
void main()
{
    int n,sum=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    int k=n;
    while(k!=0)
    {
        r = k%10;
        int f = fact(r);
        k = k/10;
        sum = sum+f;
    }
        if(sum == n)
            printf("\n Num is strong");
        else
            printf("\n Not strong");
}
int fact(int r)
{
    int mul = 1;
    for(int i=1;i<=r;i++)
    {
        mul = mul*i;
    }
    return mul;
}
