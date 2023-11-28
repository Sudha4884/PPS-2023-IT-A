#include<stdio.h>
struct student
{
  char Name[20];
  int rno;
  char dept[20];
  char sect;
}s1[10];
void main()
{
int i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s %d %s %c",s1.Name,&s1.rno,s1.dept,&s1.sect);
}
printf("NAME\tROLL NUMBER\tDEPARTMENT\tSECTION\n");
for(i=0;i<n;i++)
{
printf("%s\t%d\t%s\t%c\n",s1.Name,s1.rno,s1.dept,s1.sect);
}
}
