// program for writing pascals triangle
#include<stdio.h>
int fact(int r);
int main()
{
 int c,r,i,j,term;
 printf("enter the number of rows: ");
 scanf("%d",&r); 
 	for(i=0;i<=r;i++)
 	{ 
	for(j=0;j<=r-i;j++)
		printf(" "); 
		for(j=0;j<=i;j++)
 		{
	 	term = fact(i)/(fact(j)*fact(i-j));
 		printf(" %d ",term);	
 		}
	printf("\n");
        }	
}
int fact(int r)
{
	int a=1,i;
 	for(i=1;i<=r;i++)
	a=a*i;
	return a;
}
