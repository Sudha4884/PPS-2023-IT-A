#include<stdio.h>
struct student 
{
	char name[20];
	int rollno;
	float cgpa;
};
void main()
{
struct student stu[64];
int i,n;
printf("\nEnter a value for n: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter values of name,rollno,cgpa: ");
scanf("%s %d %f",&stu[i].name,&stu[i].rollno,&stu[i].cgpa);
}
for(i=0;i<n;i++)
{
printf("\n%s %d %f",stu[i].name,stu[i].rollno,stu[i].cgpa);
}
}
