#include<stdio.h>
struct student
{
char name[100];
int cgpa;
int rollno;
};
int main()
{
struct student s1;
printf("\n enter name,cgpa, rollno");
scanf("%s%d%d",s1.name,&s1.cgpa,&s1.rollno);
printf("%s%d%d",s1.name,s1.cgpa,s1.rollno);
}
