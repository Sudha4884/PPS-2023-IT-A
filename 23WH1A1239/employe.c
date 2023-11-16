#include<stdio.h>
struct employe
{ 
 char name[20];
 int eid,salary;
 int number;
};
void main()
{
 int i,n;

 printf("\n Enter n: ");
 scanf("%d",&n);
struct employe e[n];
 for(i=0;i<n;i++)
 {
  printf("\n Enter Name,ID,Salary and Number: ");
  scanf("%s%d%d%d",e[i].name,&e[i].eid,&e[i].salary,&e[i].number);
 }
 for(i=0;i<n;i++)
 { 
  printf("\n %s %d %d %d",e[i].name,e[i].eid,e[i].salary,e[i].number);
 }
}
