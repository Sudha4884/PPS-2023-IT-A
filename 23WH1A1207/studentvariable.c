#include<stdio.h>
struct student
{
char name[20];
int rollnumber;
float cgpa;
};
void main()
{
struct student s1;
puts("\n Enter name,rollnumber,cgpa of s1");
scanf("%s%d%f",s1.name,&s1.rollnumber,&s1.cgpa);
printf("\n Name   roll number   cgpa");
printf("\n %s      %d          %.1f ",s1.name,s1.rollnumber,s1.cgpa);
}     

