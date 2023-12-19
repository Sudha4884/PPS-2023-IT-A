#include<stdio.h>
struct student
{
char name[20];
int rollno;
float cgpa;
};
void main()
{
struct student stu[20];
int n,i;
printf("\n Enter n");
scanf("%d",&n);
 
  for(i=0;i<n;i++)
{ printf("\n Enter student name, rollno, cgpa");
    scanf("%s%d%f",stu[i].name,&stu[i].rollno,&stu[i].cgpa);
}
for(i=0;i<n;i++)
{
printf("\n %s %d %f",stu[i].name,stu[i].rollno,stu[i].cgpa);
}

}
