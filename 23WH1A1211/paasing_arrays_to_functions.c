#include<stdio.h>
int avg(int[]);
void main(){
	int average;
	int marks[5]={1,2,3,4,5};
	average=avg(marks);
	printf("the average is %d",average);
	
}
int avg(int marks[])
{
	int i,sum=0;
	for (i=0;i<=5;i++)
	{
		 sum= sum+marks[i];
}
		int average;
	    average= sum/5;
		return average;
	
}
