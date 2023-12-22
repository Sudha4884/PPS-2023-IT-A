#include <stdio.h>
void main()
{
    int n,i=1,fact=1;
    printf("Enter n: ");
    scanf("%d",&n);
    do
    {
        fact = fact*i;
        i++;
    }while(i<=n);
    printf("Factorial is: %d",fact);
}
