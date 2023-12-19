#include<stdio.h>
int main()
{
float marks[10]
printf("enter 10 students marks: \n")
int i;
for(i=0;i<10;i++)
{
scanf("%f",&marks[i]);
}
float sum=0,avg;
for(i=0;i<10;i++)
{
sum = sum+marks[i];
}
avg = sum/10;
printf("answer :%f",avg);
printf("answer");
}
