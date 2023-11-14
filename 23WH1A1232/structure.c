#include<stdio.h>
#include<string.h>
struct student
{
char Name[20];
int rno;
float cgpa;
}
s1 = {"Meenakshi",32,9.8};
struct student s2;
void main()
{
struct student s3;
//assigning values to members//
strcpy(s2.Name,"Tillu");
s2.rno = 45;
s2.cgpa = 9.5;
puts("\n Enter Name, rno, cgpa of s3");
scanf("%s%d%f",s3.Name,&s3.rno,&s3.cgpa);
printf("\n%s%d%%f",s1.Name,s1.rno,s1.cgpa);
}
