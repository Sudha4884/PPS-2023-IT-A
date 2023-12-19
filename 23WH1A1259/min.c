#include<stdio.h>
int main()
{
int salary[10]={1,2,3,4,5,6,7,8,9,1};
int minsalary = salary[0],i,min;
for(i=1;i<10;i++)
{
if(min<salary[i])
{
minsalary = salary[i];
}
}
printf("\n answer :%d",minsalary);
return 0;
}

