#include<stdio.h>
struct student
{
char name[10];
int rollno;
float cgpa;
};
void main()
{
int i ,n ;
printf("enter number of students");
scanf("%d",&n);
struct student s1[n];
for (i=0 ; i<n ; i++)
{
printf("enter the student details");
scanf("%s%d%f",s1[i].name,&s1[i].rollno,&s1[i].cgpa);
}
for (i=0 ; i<n ; i++)
{
printf("\n %s  %d  %f",s1[i].name,s1[i].rollno,s1[i].cgpa);
}
}
