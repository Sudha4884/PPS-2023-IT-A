#include<stdio.h>
#include<string.h>
typedef struct student
{
char name [20];
int rollno;
}stud;
 void main()
{
stud record;
strcpy(record.name,"vaishnavi");
record.rollno= 61;
printf("student name :%s \n",record.name);
printf("rollno : %d \n", record.rollno);
return 0 ;
}

