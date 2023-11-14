#include<stdio.h>
void main()
{
int n[20]={0};
for(int i=0;i<20;i++)
{
printf("\n Enter the elements ");
scanf("%d",&n[i]);
}
for(int i=0;i<20;i++)
printf("%4d",n[i]);
}

