#include<stdio.h>
struct student
{
char name[20];
int id;
};
void main()
{
struct student stu[20];
int n,i;
printf("enter the n: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter the name, id");
scanf("%s %d",&stu[i].name,&stu[i].id);
}
for(i=0;i<n;i++)
printf("\n%s\n%d",stu[i].name,stu[i].id);

}
                                    
