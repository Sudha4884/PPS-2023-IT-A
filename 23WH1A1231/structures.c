#include<stdio.h>
struct student
{
char name[20];
int rollno;
float cgpa;
};
void main()
{
struct student s;
puts("\n Enter name,rollno,cgpa");
scanf("%s%d%f", s.name, &s.rollno, &s.cgpa);
printf("%s\n%d\n%f", s.name,s.rollno,s.cgpa);
}
