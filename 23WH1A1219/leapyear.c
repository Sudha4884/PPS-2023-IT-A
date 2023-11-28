#include<stdio.h>
int checkleapyear(int);
int main()
{
int y,year,a;
printf("Enter leap year");
scanf("%d",&y);
a=checkleapyear(y);
if (a==1)
printf("Is a leap year");
else
printf("Is not a leap year");
}
int checkleapyear(int year)
{
if((year%400==0)||((year%4==0)&&(year%100!=0)))
return 1;
else
return 0;
}
