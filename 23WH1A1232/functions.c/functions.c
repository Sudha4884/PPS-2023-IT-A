#include<stdio.h>
void readArray(int[],int);
void printArray(int[],int);
int main()
{
int A[10],i,j,n1,n2,B[10];
printf("\n Enter n1");
scanf("%d",&n1);
printf("\n Enter %d elements",n1);
for(i=0;i<n1;i++)
scanf("%d",&A[i]);
readArray(A,n1);

printf("enter n2 value:");
scanf("%d",&n2);
printf("\n Enter %d elements",n2);
for(j=0;j<n2;j++)
scanf("%d",&B[j]);
printArray(B,n2);
int sum = A[10]+B[10];
printf("%d",sum);
}
void readArray(int x[],int no)
{
int i;

for(i = 0;i<no;i++)
printf("%d",x[i]);
}
void printArray(int y[],int no1)
{
int j;

for(j=0;j<no1;j++)
printf("%d",y[j]);




}




