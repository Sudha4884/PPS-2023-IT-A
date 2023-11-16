#include<stdio.h>
struct student
{
 char Name[30];
 int rollno;
 float cgpa;
}std;
void main()
{
struct student std;
int i;
printf("\n Enter Name rollno cgpa: ");
scanf("%s %d %f",std.Name,&std.rollno,&std.cgpa);
printf("\n Name rollno cgpa: ");
printf("\n %s %d %f",std.Name,std.rollno,std.cgpa);
}
