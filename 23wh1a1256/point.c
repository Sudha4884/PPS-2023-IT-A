#include<stdio.h>
struct student
{
char name[20];
int rollno;
float cgpa;
}*sptr;

void main()
{
struct student s1;
sptr=&s1;
printf("\n enter student name,rollno,cgpa");
scanf("%s%d%f",sptr->name,&sptr->rollno,&sptr->cgpa);
printf("\n the student details is");
printf("\n %s %d %f",(*sptr).name,(*sptr).rollno,(*sptr).cgpa);
}

