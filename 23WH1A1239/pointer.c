#include<stdio.h>
struct student
{  
 char name[30];
 int rollno;
 int cgpa;
};
void main()
{
 struct student *cptr;
 struct student c;
 cptr=&c;
 printf("\n Enter Name rollno CGPA :");
 scanf("%s%d%d",cptr->name,&cptr->rollno,&cptr->cgpa);
 printf("\n The details are:");
 printf("\n %s %d %d",cptr->name,cptr->rollno,cptr->cgpa);
}
