//structure
#include<stdio.h>
struct student
{
int year;
char name[20],branch[10];
};
void main()
{
struct student s1[2];
int i;
for(i=0;i<2;i++)
{
   printf("\n enter name:");
   scanf("%s",s1[i].name);
   printf("\n branch :");
   scanf("%s",s1[i].branch);
   printf("\n enter a year:");
   scanf("%d",&s1[i].year);
}
for(i=0;i<2;i++)
printf("\n%s %s %d",s1[i].name,s1[i].branch,s1[i].year);
}

