#include<stdio.h>
void printArray(int[],int);
int searchElement(int [],int);
int main()
{ 
int A[10],i,n,num;
printf("\n Enter n");
scanf("%d",&n);
printf("Enter %d numbers",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
printArray(A,n);

int a =searchElement(A,n);
if(a==1)
printf("element is present");
else
printf("not present");

}
void printArray(int X[],int noe)
{
int i,sum=0;
for(i=0;i<noe;i++)
{ 
sum=sum+X[i];
printf("%d  ",X[i]);
}
printf("\n %d ",sum);
}
int searchElement(int p[],int num)
{
int no;
printf("Enter a number to be searched");
scanf("%d",&no);

for(int i=0;i<num;i++)
{ 
if(no==p[i])
{  return 1;

}
}
return 0;

}
