#include<stdio.h>
void readArray(int[],int);
void printArray(int[],int);
void sumArray(int[],int);
void searchArray(int[],int);
void main()
{
int A[10],i,n;
printf("\n enter n");
scanf("%d",&n);
readArray(A,n);
printArray(A,n);
sumArray(A,n);
searchArray(A,n);
}
void readArray(int Arr[],int n)
{
int i;
printf("\n enter %d elements: ",n);
  for(i=0;i<n;i++)
    scanf("%d",&Arr[i]);
}
void printArray(int C[],int noe)
{
int i;
for(i=0;i<noe;i++)
printf("\n%d",C[i]);
}
void sumArray(int A[],int b)
{
int i,sum=0;
  for(i=0;i<b;i++)
   sum=sum+A[i];
     printf("\n sum of elements is: %d",sum);
}
void searchArray(int Y[],int y)
{
int j,ele,f=0;
printf("\n enter the element to search: ");
scanf("%d",&ele);
 for(j=0;j<y;j++)
   if (Y[j]==ele)
{
printf("\n the element is %d is present at %d position in the list\n",ele,j+1);
f>1;
break;
if(f==0)
printf("\n the element %d is not present",ele);

}
}


