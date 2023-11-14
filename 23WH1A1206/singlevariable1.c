#include<stdio.h>
struct student
{
char name[20];
int roll;
float cgpa;
};
void main()
{
struct student s1;
printf ("\n Enter name,roll number and cgpa");
scanf("%s%d%d",s1.name,&s1.roll,&s1.cgpa);
printf("\n%s %d %d",s1.name,s1.roll,s1.cgpa);
}
