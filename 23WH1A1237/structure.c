#include <stdio.h>
struct student{
char name[2];
int rollno;
float cgpa;
}s1;
void main()
{
struct student s1;
printf("Enter name,rollno,cgpa of student 1");
scanf("%s%d%f",s1.name,&s1.rollno,&s1.cgpa);
printf("\n%s %d %f",s1.name,s1.rollno,s1.cgpa);
} 
