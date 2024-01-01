#include<stdio.h>
int CheckLeapYear(int);
void main()
{
    int y,res;
    scanf("%d",&y);
    res = CheckLeapYear(y);
    if (res ==1)
    printf("Leap Year");
    else
    printf("non leap year");
}
int CheckLeapYear(int year)
{
    if((year%400==0)||(year%4==0)&&(year%100!=0))
    return 1;
    else 
    return 0;
}
