#include<stdio.h>
#include<string.h>
typedef struct student
{
int rollno;
char name[20];


}stud;
int main()
{
stud record;
strcpy(record.name,"kavya");
record.rollno=62;
printf("student name :%s\n",record.name);
printf("roll no:%d\n",record.rollno);
 
}


