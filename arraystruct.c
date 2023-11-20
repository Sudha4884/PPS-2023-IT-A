#include<stdio.h>
#include<string.h>
 
void main(){
struct student
{char name[20];
 int r_no;
 float cgpa;
 char gender[20];
 char branch[20];
};

struct student s1[5];
int i; 
for(i=0; i<1; i++){
 printf("ENTER REQ VALUES: ");
 scanf("\n %s %d %f %s %s", &s1[i].name, &s1[i].r_no, &s1[i].cgpa, &s1[i].gender, &s1[i].branch);
}

for(i=0; i<1; i++){
 printf("\n %s %d %f %s %s", s1[i].name, s1[i].r_no, s1[i].cgpa, s1[i].gender, s1[i].branch);
}
}
  
