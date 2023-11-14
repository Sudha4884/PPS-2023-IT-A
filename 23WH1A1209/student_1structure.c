#include<string.h>
struct student
{char name[20];
int rno;
float cgpa;
char gender[6];
char branch[3];
};
void main(){
struct student s1;

printf("Enter details of a student name, rno, cgpa, gender, branch: ");
scanf("\n%s %d %f %s %s", s1.name, &s1.rno, &s1.cgpa, &s1.gender, &s1.branch);
printf("\n%s \n%d \n%f \n%s\n %s", s1.name,s1.rno, s1.cgpa, s1.gender, s1.branch);
} 
