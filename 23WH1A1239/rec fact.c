#include <stdio.h>
int fact(int);
void main()
{
    int i,n;
    printf("Enter number\n");
    scanf("%d", &n);
    i = fact(n);
    printf("%d",i);
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
        return n*fact(n-1);
}

