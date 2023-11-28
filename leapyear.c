#include<stdio.h>
int checkLeapYear(int);
int main()
{
int y,res;
res = checkLeapYear(2001);
if(res==1)
printf("LEAP YEAR");
else
printf("NOT LEAP YEAR");
checkLeapYear(y);
}
int checkLeapYear(int year)
{
if ((year%400==0)||((year%4==0)&&(year%100!=0)))
return 1;
else
return 0;
}
