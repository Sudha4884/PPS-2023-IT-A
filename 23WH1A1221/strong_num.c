#include <stdio.h>
int fact(int);
void main()
{
    int n,sum=0,r;
    printf("Enter any number: ");
    scanf("%d",&n);
    int t=n;
    while(t!=0)
    {
        r = t%10;
        int f = fact(r);
        t = t/10;
        sum = sum+f;
    }
        if(sum == n)
            printf("\n it is strong number");
        else
            printf("\n it is not strong number");
}
int fact(int r)
{
    int m = 1;
    for(int i=1;i<=r;i++)
    {
        m = m*i;
    }
    return m;
