#include<stdio.h>
int CheckLeapYear(int);
void main()
{
    int a,b;
    scanf("%d",&a);
    b = CheckLeapYear(a);
    if (b == 1)
    printf("Leap Year");
    else
    printf("not a leap year");
}
int CheckLeapYear(int year)
{
    if((year%400==0)||(year%4==0)&&(year%100!=0))
    return 1;
    else 
    return 0;
}
