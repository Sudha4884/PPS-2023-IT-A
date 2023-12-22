#include <stdio.h>
void main()
{
    int n,i=1,prod=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        prod=prod*i;
        i++;
    }
    printf("product is: %d",prod);
}
