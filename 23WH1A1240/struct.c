#include<stdio.h>
struct student
{
  char gender;
  float cgpa;
  char name[20];
  int dob;
};
void main() {
struct student s;
scanf("%c%f%s%d",&s.gender,&s.cgpa,s.name,&s.dob);
printf("%c\n%f\n%s\n%d",s.gender,s.cgpa,s.name,s.dob);
}
