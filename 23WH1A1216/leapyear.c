#include<stdio.h>
int check_leap_year(int);
int main()
{ int y,res ;
scanf("%d",&y);
res = check_leap_year(y);
 if (res == 1 )
    printf("\n leap year");
 else
    printf("\n not leap year");
  
 

}
int check_leap_year(int year)
{ 
 if((year%400 == 0)||((year%4==0)&&(year%100!=0)))
 return 1;
else
 return 0;
}
