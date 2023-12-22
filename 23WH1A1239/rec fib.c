#include <stdio.h>
int fib(int);
void main()
{
    int i,n;
    printf("Enter number\n");
    scanf("%d", &n);
    i = fib(n);
    printf("%d\n",i);
    for(i=0;i<=n;i++)
        printf("%d\n",fib(i));
}
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

