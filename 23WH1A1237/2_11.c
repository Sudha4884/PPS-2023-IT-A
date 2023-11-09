#include <stdio.h>
void main()
{
int i;
int marks[60]={10,20,30};
for(i=0;i<=60;i++)
{
printf("\n enter the marks");
scanf("%d",& marks[i]);
}
for(i=0;i<=60;i++)
{ 
printf("3%d",marks[i]);
scanf("%d",&marks[i]);
}
 
}

