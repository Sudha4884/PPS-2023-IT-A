#include<stdio.h>
struct student
{
char name[20];
int rollno;
float cgpa;
};
struct student s1;
void main()
{
printf("\n Enter name, rollno, cgpa");
scanf("%s%d%f",s1.name, &s1.rollno, &s1.cgpa);
printf("\n%s%d%f",s1.name, s1.rollno, s1.cgpa);
}
