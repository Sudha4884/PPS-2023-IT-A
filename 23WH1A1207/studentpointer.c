#include<stdio.h>
struct student
{
char name[30];
int rollnumber;
int cgpa;
};
void main()
{
struct student(*sptr),s;
sptr=&s;
puts("\nenter name,rollnumber,cgpa");
scanf("%s %d %d",sptr->name,&sptr->rollnumber,&sptr->cgpa);
printf("\n Name	Rollnumber	Cgpa");
printf("\n %s 	%d	%d",(*sptr).name,(*sptr).rollnumber,(*sptr).cgpa);
}
