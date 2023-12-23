#include<stdio.h>
int check_leapyear (int);
int main ()
{
int y,res;
scanf("%d",leapyear(2023))
res=check_leapyear(y);
if (res==1)
printf("\n  leap year");
else 
printf ("\n not leap year");


} 
int check_leapyear(int year)
{
if((year%400==0)||((year%4==0)&&(year%100!=0)))
return 1;
else
return 0;

}

