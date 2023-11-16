//wap to read and print student details
#include<stdio.h>
struct student
{
  char name[20];
  int rno;
  float cgpa;
  };
void main()
{
struct student s;
printf("enter student details");
scanf("%s %d %f",s.name,&s.rno,&s.cgpa);
printf("\n %s %d %f",s.name,s.rno,s.cgpa);
}
