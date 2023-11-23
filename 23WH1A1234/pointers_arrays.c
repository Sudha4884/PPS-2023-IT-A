#include<stdio.h>
struct complex
{
 int real;
int img;
};
void main()
{
int i,n;
struct complex com[10],*ptr;
ptr=com;
printf("size=%ld",sizeof(com));
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter real,img");
scanf("%d %d",&ptr->real,&ptr->img);
ptr++;
}
for(i=0;i<n;i++)
{
if(ptr->img>0)
printf("\n %d+%di",ptr->real,ptr->img);
else if(ptr->img<0)
printf("\n %d %di",ptr->real,ptr->img);
else
printf("\n %d",ptr->real);
ptr++;
}
}
