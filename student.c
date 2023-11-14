#include<string.h>
#include<stdio.h>
struct student
{
char name[20];
int rno;
float cgpa;
};
void main()
{
struct student s1;
puts("\n enter name,rno,cgpa");
scanf("%s%d%f",s1.name,&s1.rno,&s1.cgpa);
printf("\n NAME RNO CGPA\n");
printf("\n %s %d %f",s1.name,s1.rno,s1.cgpa);
}

