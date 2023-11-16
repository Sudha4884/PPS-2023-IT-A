#include<stdio.h>
//n student details
struct student
{
char name[20];
int rno;
float cgpa;
};
void main()
{
int n;
printf("enter n value;");
scanf("%d",&n);
struct student s[n];
for(int i=1;i<n;i++)
{
  printf("/n enter student details;");
  scanf("%s%d%f",s[i].name,&s[i].rno,&s[i].cgpa);
}
for(int i=1;i<n;i++)
{
printf("\n %s\t%d\t%f",s[i].name,s[i].rno,s[i].cgpa);
}
}
