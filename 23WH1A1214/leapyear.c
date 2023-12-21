#include <stdio.h>
int check_leap_year(int);
int main ()
{ 
 int y;
check_leap_year(2000);
printf("\n enter year" );
scanf("%d",&y);
check_leap_year(y);
}
int check_leap_year(int year)
{
 if ((year%400==0)||((year%4==0)&&(year%100!=0)))
   { 
      printf("\n %d is LEAP YEAR",year);
   }
 else 
   {
      printf("\n %d  is NOT A LEAP YEAR" , year );
   }
}
