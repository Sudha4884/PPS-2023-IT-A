#include<stdio.h>
struct std
{
 char name[20]
 int rno;
 float cgpa;
};
void main() 
{
struct std  s;
struct std *s1;
s1=&s;
printf("enter student details");
scanf("%s%d%f",s.name,&s.rno,&s.cgpa);
printf("student details are:");
printf("%s\n%d\n%f",s1->name,s1->rno,s1->cgpa);
}



