#include<stdio.h>
int checkLeapYear(int);
int main()
{
int year,res;
res = checkLeapYear(2004);
 if(res == 1)
printf("leap year");
else 
printf("\n not a leap year");
}
int checkLeapYear(int year)
{
if ((year%400==0)||((year%4==0)&&(year%100!=0)))
 return 1;
else
 return 0;
}

