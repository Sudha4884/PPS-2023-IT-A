#include<stdio.h>
void readarray(int[], int);
void printarray(int[], int);
void searchelement(int[], int);
void sumofarray(int[],int);
int main()
{
int A[10],i,n;
printf("enter n =");
scanf("%d",&n);
readarray(A,n);
printf("\n entered %d elements are",n); 
printarray(A,n);
searchelement(A,n);
sumofarray(A,n);
}
void readarray(int x[],int noe)
{
int i;
for(i=0;i<noe;i++)
scanf("%d",&x[i]);
}
void printarray(int x[],int noe )
{
int i;
for(i=0;i<noe;i++)
printf("%d",x[i]);
}
void searchelement(int x[],int noe)
{
int i,k;
for(i=0;i<noe;i++)
{ 
if (k==x[i])
{
 printf(" \n %d element is present",k);
}
else
{
 printf("\n %d element is not present",k);
}
}
}
void sumofarray(int x[],int noe)
{ int i,sum=0;
for(i=0;i<noe;i++)
sum =sum +x[i] ;
printf("\n sum is %d",sum);
}

