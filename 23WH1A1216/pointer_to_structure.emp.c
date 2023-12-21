#include<stdio.h>
struct employee
{
char name [30];
long int phno;
int id;
int salary;
}*cptr;
void main(){
struct employee emp1;
cptr=&emp1;
printf("\n enter name phno id salary");
scanf("%s%ld%d%d",cptr->name,&cptr->phno,&cptr->id,&cptr->salary);
printf("\n%s\n%ld\n%d\n%d",cptr->name,cptr->phno,cptr->id,cptr->salary);
}
