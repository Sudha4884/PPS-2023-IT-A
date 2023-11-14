#include<stdio.h>
struct student
{
char name[5];
int roll,cgpa;
};
void main()
{
int i;
struct student std[5];
for(i=0;i<5;i++)
{
printf("\nEnter name,Roll NUmber and CGPA");
scanf("%s%d%d",std[i].name,&std[i].roll,&std[i].cgpa);
}
for(i=0;i<5;i++)
{
printf("\n %s  %s  %d",std[i].name,std[i].roll,std[i].cgpa);
}
}

