#include<stdio.h>
float Bill(int);
void main()
{
    int units;
    scanf("%d",&units);
   float a = Bill(units);
    printf("%f",a);

    
}
float Bill(int units)
{
    float bill;
    if (units<=199)
    bill=units*1.20;
    else if (units<=400)
    bill = 199*1.20+((units-199)*1.50);
    else if (units<=600)
    bill = 199*1.20+200*1.50+((units-400)*1.8);
    else if (units> 600)
    bill = 199*1.20+200*1.5+200*1.8+((units-600)*2);
    if (bill>400)
    bill = bill+(0.15*bill);
    return bill;
    
}
