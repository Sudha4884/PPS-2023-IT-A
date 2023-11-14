#include<stdio.h>
struct student
{
char name[15];
int rollno;
float cgpa;
};
void main()
{
struct student s1;
printf("\n Enter name, rollno, cgpa");
scanf("%s%d%f",s1.name,&s1.rollno,&s1.cgpa);
printf(" %s %d %f",s1.name,s1.rollno,s1.cgpa);
}

