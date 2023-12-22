#include <stdio.h>
void isprime(int);
void main()
{
    isprime(5);
}
void isprime(int a)
{
    int i,count=0;
    for(i=0;i<=a;i++)
    {
        if(a%i==0)
            count++;
    }
    if(count == 2)
        printf("\n Prime");
    else
        printf("\n Not prime");
}
