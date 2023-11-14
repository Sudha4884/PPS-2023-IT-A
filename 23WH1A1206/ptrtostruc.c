#include<stdio.h>
struct student
{
char name[30];
int roll;
float cgpa;

};
void main()
{
struct student *sptr,s;
sptr=&s;
puts("Enter name,roll no. and cgpa");
scanf("%s %d %f",(*sptr).name,&(*sptr).roll,&(*sptr).cgpa);
printf("\nName	Roll NO.	CGPA");
printf("\n %s	%d	%f",(*sptr).name,(*sptr).roll,(*sptr).cgpa);
}
