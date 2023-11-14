#include<string.h>
#include<stdio.h>
struct student
{
char name[20];
int roll;
float cgpa;
};
void main()
{
struct student *sptr,s1;
sptr=&s1;
puts("enter name,rollno,cgpa");
scanf("%s%d%f",sptr->name,&sptr->roll,&sptr->cgpa);
printf("\n name,roll,cgpa");
printf("\n %s %d %f",(*sptr).name,(*sptr).roll,(*sptr).cgpa);
}
