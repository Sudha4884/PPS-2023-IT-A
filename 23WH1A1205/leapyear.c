#include<stdio.h>
int LeapYear(int);
int main()
{
int y;
checkLeapYear(1980);
printf("enter a number");
scanf("%d",&y);
checkLeapYear(y);
}
int checkLeapYear(int year)
{
if((year%400==0)||(year%4==0)&&(year%100!=0))
printf("\nLEAP YEAR");
else
printf("\nNOT A LEAP YEAR");
return 1;
}

