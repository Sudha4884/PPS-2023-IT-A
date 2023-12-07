#include<stdio.h>
void readArray(int[],int);
void printArray(int[],int);
void searchArray(int[],int );
void main()
{
 int A[0],i,n;
 printf("\n enter n:");
 scanf("%d",&n);
 readArray(A,n);
 printArray(A,n);
 }
void readArray(int Arr[],int n)
{
int i;
printf("enter %d numbers:",n);
for(i=0;i<n;i++)
scanf("%d",&Arr[i]);
}
void printArray(int x[],int no)
{
int i;
for(i=0;i<no;i++)
printf("%d",x[i]);
}

void searchArray(int y[],int n)
{
int j,ele,f=0;
printf("\n enter the element to search");
scanf("%d",&ele);
for(j=0;j<n;j++)
if(y[j]==ele)
{
printf("\n the element is present at %d position in the list\n",j+1);
f++;
break;
}
if(f==0)
printf("\n The element %d is not present i list\n",ele);
}


