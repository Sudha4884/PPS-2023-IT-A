#include<stdio.h>
#include<string.h>
struct student{
char name[20];
int rollnumber;
long int phnnumber;
};
void main()
{
struct student stud[10];
int i,n;
printf("enter the n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the name,rollnumber,phnnumber");
scanf("%s%d%ld",&stud[i].name,&stud[i].rollnumber,&stud[i].phnnumber);
printf("\n%s \n%d \n%ld ",stud[i].name,stud[i].rollnumber,stud[i].phnnumber);
}

}
