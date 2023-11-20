#include<stdio.h>
#include<string.h>
void main(){

struct studet
{char name[20];
 int roll_no;
 float cgpa;
 char gender[20];
 char branch[20];
  };

struct studet s1;
printf("Enter values for name, roll_no, cgpa, gender, branch");
scanf("\n %s %d %f %s %s",s1.name, &s1.roll_no, &s1.cgpa, &s1.gender, &s1.branch);
printf("\n %s \n%d \n%f \n%s \n%s", s1.name, s1.roll_no, s1.cgpa, s1.gender, s1.branch);

}
