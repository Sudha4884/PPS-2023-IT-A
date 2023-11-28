#include<stdio.h>
struct stud
{
char name[20];
int rno;
char dept[10];
char sect;
}S;
struct stud *ptr;
void main()
{
ptr=&S;
printf("enter the details of student\n");
//printf("Name\trollno\tdepartment\tsection\n");
scanf("%s %d %s %c",ptr->name,&ptr->rno,ptr->dept,&ptr->sect);
printf("NAME\tROLLNUMBER\tDEPARTMENT\tSECTION\n"); 
printf("%s\t%d\t%s\t%c\n",ptr->name,ptr->rno,ptr->dept,ptr->sect);
}
