#include <stdio.h>
float findbill(int);
void main()
{
    int nov;
    float res;
    printf("Enter units: ");
    scanf("%d",&nov);
    res = findbill(nov);
    printf("\n The bill is %f",res);
}
float findbill(int units)
{
    float bill;
    if(units>=600)
        bill=2*units;
    else if(units>=400)
        bill = 1.8*units;
    else if(units>=200)
        bill = 1.50*units;
    else
        bill = 1.2*units;
    if(bill<100)
    {
        bill=100;
    }
    if(bill>400)
    {
        bill = bill + (0.15)*bill;
    }
    return bill;
}
