#include <stdio.h>
int nat(int);
void main()
{
    int i,n;
    printf("Enter number\n");
    scanf("%d", &n);
    i = nat(n);
    printf("%d",i);
}
int nat(int n)
{
    if(n==0)
    {
        return ;
    }
    else
        printf(n-1);
        printf("%d",n);
}

