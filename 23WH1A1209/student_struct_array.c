#include<stdio.h>
#include<string.h>

void main(){
struct student
{char name[20];
int rno;
int cgpa;
};

struct student s1[5];
int i;

printf("Enter the details of student name, rno, cgpa: ");
for (i=0; i<5; i++)
{scanf("\n%s   %d   %d", s1[i].name, &s1[i].rno, &s1[i].cgpa);
}
printf("name   rno   cgpa");
for(i=0; i<5; i++)
{printf("\n%s    %d     %d", s1[i].name,s1[i].rno,s1[i].cgpa);
}
}
