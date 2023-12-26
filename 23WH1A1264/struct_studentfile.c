#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[10];
float per;
};
void main()
{
FILE *fptr;
struct student x;
int i,n;
fptr = fopen("student.txt","w");
printf("\n enter the number of student:\n");
scanf("%d",&n);
printf("\nenter %d students:\n");
for(i=0;i<n;i++)
{
scanf("%d %s %f",&x.rollno,x.name,x.per);
fwrite(&x,sizeof(x),1,fptr);
}
fclose(fptr);
fptr=fopen("student.txt","r");
for(i=1;i<=n;i++)
{
fread(&x,sizeof(x),1,fptr);
printf("\n %d %s %f",x.rollno,x.name,x.per);
}
}
