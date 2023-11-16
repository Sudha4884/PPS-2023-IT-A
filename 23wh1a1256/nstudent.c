#include<stdio.h>
struct student
{
char name[20];
int rollno;
float cgpa;
};
void main()
{
struct student st[20];
int n,i;
printf("\n enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter student name,rollno,cgpa");
scanf("%s%d%f",st[i].name,&st[i].rollno,&st[i].cgpa);
}
for(i=0;i<n;i++)
{
printf("\n %s %d %f",st[i].name,st[i].rollno,st[i].cgpa);
}
}
