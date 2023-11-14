#include<stdio.h>
struct student
{
char name[5];
int rollnumber;
float cgpa;
};
void main()
{
int i;
struct student s[5];
for(i=0;i<5;i++)
{
printf("\n enter name, roll number, cgpa,");
scanf("%s %d %f",s[i].name,&s[i].rollnumber,&s[i].cgpa);
}
for(i=0;i<5;i++)
{
printf("\n %s	%d	%f", s[i].name,s[i].rollnumber,s[i].cgpa);
}
}

