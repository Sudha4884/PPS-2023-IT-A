#include<stdio.h>
struct emply
{
 char name[20];
 int eid;
 long int phno;
};
void main()
{  int i,n;
scanf("%d",&n);
 struct emply e[10];
for(i=1;i<n;i++)
{
 printf("enter emply details");
 scanf("%s%d%ld",e[i].name,&e[i].eid,&e[i].phno);
}
for(i=1;i<n;i++)
{
printf("%s  %d  %ld",e[i].name,e[i].eid,e[i].phno);
}
} 
