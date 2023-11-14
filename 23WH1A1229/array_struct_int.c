// Array of structres
#include<stdio.h>
struct student
{ 
char name[20];
int rollno;
float cgpa;
};
void main()
{
struct student std[10];
int i;
//Read 10 student details
for(i=0;i<4;i++)
{
printf("\n Enter name, rollno, cgpa");
scanf("%s%d%f",std[i].name,&std[i].rollno,&std[i].cgpa);
}
for(i=0;i<4;i++)
{
printf("\n %s %d %f",std[i].name,std[i].rollno,std[i].cgpa);
}
}


