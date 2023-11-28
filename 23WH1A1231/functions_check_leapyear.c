#include<stdio.h>
int checkleapyear(int);
void main() {
int year;
printf("enter year");
scanf("%d", &year);
int leapyear= checkleapyear(year);
printf("%d", leapyear);
}
int checkleapyear(int year) {
int leapyear;
if(year % 400==0 || year % 4==0 && year % 100!=0)
{
printf("leap year");
}
else
printf("not a leap year");
return 0;
}

