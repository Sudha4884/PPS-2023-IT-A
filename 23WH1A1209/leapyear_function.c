#include<stdio.h>
int leapyear(int);
int main()
{
int x,result;
printf("Enter a year: ");
scanf("%d",&x);
result= leapyear(x);
if (result==1)
printf("LEAP YEAR");
else
printf("NOT A LEAP YEAR");

}
int leapyear (int year)
{
if (year % 400 == 0)
return 1;
else
return 0;
}
