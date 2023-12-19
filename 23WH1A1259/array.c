#include<stdio.h>
int main ()
{
float marks[10];
printf("enter 10 students marks");
int i;
for(i=0;i<10;i++)
{
scanf("%f",&marks[i]);
}
printf("received values:");
for(i=0;i<10;i++)
{
printf("%f",marks[i]);
}
printf("\n answer");
return 0;
}
