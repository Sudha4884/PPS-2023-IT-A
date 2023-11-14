#include<stdio.h>
struct student
{
char name[20];
int rollno;
float cgpa;
};
void main() {
struct student s[100];
for(int i = 0;i<3;i++)
{
printf("enter name,rollno,cgpa");
scanf("%s%d%f", s[i].name, &s[i].rollno, &s[i].cgpa);
}
for(int i=0;i<3;i++) {
printf("\n%s\t%d\t%f", s[i].name,s[i].rollno,s[i].cgpa);
}
}

