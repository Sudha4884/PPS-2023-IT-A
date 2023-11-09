#include<stdio.h>
void main()
{
int i,n,dob[10];
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter date of birth of students daymonyear");
scanf("%d",&dob[i]);
}
for(i=0;i<n;i++)
{
printf("%4d",dob[i]);
}
printf("\n");
}
