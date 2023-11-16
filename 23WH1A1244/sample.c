#include<stdio.h>
//wap to read and print student details

struct student_details
{
char Name[20];
int rno;
float cgpa;
};
void main()
{
struct student_details s1;
printf("\n enter the student details");
scanf("\n%c%d%f",s1.Name,&s1.rno,&s1.cgpa);
printf("\n name rno cgpa");
printf("\n%c%d%f",s1.Name,s1.rno,s1.cgpa);
}

