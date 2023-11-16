#include<stdio.h>
#include<string.h>
typedef struct student
{
char name[10];
int rollnumber;
}
stud;
void main()
{
stud record;
strcpy(record.name,"mahathi");
record.rollnumber=64;
printf("student name:%s\n",record.name);
printf("student rollnumber:%d\n",record.rollnumber);
}
