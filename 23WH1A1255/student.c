#include<stdio.h>
struct student
{
char name[20];
int rollno;
float cgpa;
};
void main()
{
struct student s1;
printf("\n enter name,rollno,cgpa");
scanf("%s %d %f",s1.name,&s1.rollno,&s1.cgpa);
printf("\n %s %d %f",s1.name,s1.rollno,s1.cgpa);
}
