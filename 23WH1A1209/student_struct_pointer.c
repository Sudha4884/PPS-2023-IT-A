#include<stdio.h>
#include<string.h>
void main(){
struct student
{char name[20];
int rno;
int cgpa;
};
{
struct student *sptr,s1;
sptr=&s1;
printf("Enter name,rno, cgpa");
scanf("%s %d %d", &sptr->name,&sptr->rno,&sptr->cgpa);
printf("\n Name  rno  cgpa");
printf("\n %s %d %d",(*sptr).name,(*sptr).rno,(*sptr).cgpa);
}
}
