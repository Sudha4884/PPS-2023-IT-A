#include<stdio.h>
struct student
{
char name[20];
int rno;
char dept[20];
char g;
}s1;
void main()
{
s1.name="saieshwari";
s1.g='f';
s1.rno=77;
s1.dept="INFORMATION_TECHNOLOGY";
printf("NAME\tGENDER\tROLL NO\tDEPARTMENT\n");
printf("%s\t%c\t%d\t%c\t",s1.name,s1.g,s1.rno,s1.dept);
}
 
