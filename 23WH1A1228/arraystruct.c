#include<stdio.h>
#include<string.h>
struct student
{
char name[2];
int  rno;
float cgpa;
};
void main()
{
struct student std[2];
int i;
for (i=0;i<2;i++)
{
printf("\n Enter name,rno,cgpa");
scanf("%s%d%f",std[i].name,&std[i].rno,&std[i].cgpa);
}
for(i=0;i<2;i++)
{
printf("\n %s %d %f",std[i].name,std[i].rno,std[i].cgpa);
}
}

