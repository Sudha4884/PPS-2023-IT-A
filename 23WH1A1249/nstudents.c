#include<stdio.h>
struct student 
{
char name[20];
int rollno;
int cgpa;
};
void main()
{
int n,i;
scanf("%d",&n);
struct student std[10];
for(i=0;i<n;i++)
  {
   printf("\n enter name,rollno,cgpa");
   scanf("%s	%d	%d",std[i].name,&std[i].rollno,&std[i].cgpa);
   }
  for(i=0;i<n;i++)
  {
   printf("\n %s	%d	%d",std[i].name,std[i].rollno,std[i].cgpa);
  }
}

