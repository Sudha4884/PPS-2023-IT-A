#include <string.h>
#include <stdio.h>
struct student
{ char name[20];
  int rollno;
  float cgpa;
};
void main()
{
struct student std[100];
for(int i=0;i<10;i++)
{
scanf("%s %d %f", std[i].name , &std[i].rollno, &std[i].cgpa);
}
for (int i=0;i<10;i++)
{
printf("\n %s %d %f", std[i].name , std[i].rollno, std[i].cgpa);
}
}
