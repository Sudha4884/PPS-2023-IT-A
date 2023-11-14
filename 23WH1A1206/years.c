#include<stdio.h>
void main()
{
int days,years,weeks,months;
printf("Enter the days");
scanf("%d",&days);
weeks=days/7;
days=(days%7);
months=(days%30);
years=months/12;
printf("Years:%d\n",years);
printf("Months:%d",months);
printf("weeks:%d\n",weeks);
printf("days:%d\n",days);
}
