#include<stdio.h>
int checkLeapYear(int);
int main()
{
int y;
checkLeapYear(2000);
printf("\n enter year");
scanf("%d",&y);
checkLeapYear(y);
}
int checkLeapYear(int Year)
{
if((Year%400 == 0) || (Year%4 == 0) && (Year%100 != 0))
printf("\n %d leap year", Year);
else
printf("\n %d is not a leap year ", Year);
}
