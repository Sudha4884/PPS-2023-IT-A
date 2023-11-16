#include<stdio.h>
struct student
  {
    char name[20];
    int rollno;
    int cgpa;
   } *sptr;
void main()
{
 struct student *sptr;
 struct student s1;
 sptr=&s1;
  printf("\n enter name,rollno,cgpa");
  scanf("%s%d%d",sptr->name,&sptr->rollno,&sptr->cgpa);
  printf("\n the student details are");
  printf("\n %s	%d	%d",sptr->name,sptr->rollno,sptr->cgpa);
  printf("\n %s	%d	%d",(*sptr).name,(*sptr).rollno,(*sptr).cgpa);
 }   
